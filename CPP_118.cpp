#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
           (c >= 'A' && c <= 'U');
}

string get_closest_vowel(string word) {
    for (int i = 0; i < word.size(); ++i) {
        if (isvowel(word[i])) return word.substr(i);
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    string input;
    cout << "Enter a word: ";
    cin >> input;
    for (int i = 0; i < input.size(); ++i) {
        if (isvowel(input[i])) {
            cout << "The closest vowel is: " << input.substr(i);
            break;
        }
    }
    return 0;
}