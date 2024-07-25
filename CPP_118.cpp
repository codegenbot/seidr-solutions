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
    std::string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if (input.size() > 0) {
        std::cout << "The closest vowel to the ends of the string is: " << get_closest_vowel(input) << endl;
    } else {
        std::cout << "Invalid Input. Please enter a non-empty string." << endl;
    }
    return 0;
}