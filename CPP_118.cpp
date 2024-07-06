#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[left])) {
            ++left;
        } else if (!isvowel(word[right])) {
            --right;
        } else {
            return word.substr(left + 1, right - left - 1);
        }
    }
    return "";
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    cin >> s;
    
    if (!s.empty()) {
        for (char c : s) {
            if (isvowel(c)) {
                cout << "The closest vowel is " << c << ".\n";
                break;
            }
        }
    } else {
        cout << "You didn't enter any sentence. Try again.\n";
    }
    
    return 0;
}