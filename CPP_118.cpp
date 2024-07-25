#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

std::string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[left])) {
            left++;
        } else if (!isvowel(word[right])) {
            right--;
        } else {
            return word.substr(left + 1, right - left - 1);
        }
    }
    return "";
}

int main() {
    std::string word;
    cout << "Enter a word: ";
    getline(cin, word);
    string closestVowel = get_closest_vowel(word);
    if(closestVowel != "") {
        cout << "The closest vowel to the first and last characters of the word '" << word << "' is '" << closestVowel[0] << "'.\n";
    } else {
        cout << "No vowels are present in the word.\n";
    }
    return 0;
}