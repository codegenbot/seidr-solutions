#include <iostream>
#include <string>

using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.size();

    for (int i = n - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            if (!isalpha(word[i - 1]) || !isalpha(word[i + 1])) {
                continue;
            }
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    string input_word;
    cout << "Enter a word: ";
    cin >> input_word;

    string closest_vowel = get_closest_vowel(input_word);
    cout << "Closest vowel: " << closest_vowel << endl;

    return 0;
}