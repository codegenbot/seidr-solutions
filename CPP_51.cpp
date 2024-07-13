#include <string>

using namespace std;

string remove_vowels(string text) {
    string noVowels = "";
    for (char c : text) {
        if (!isalpha(c)) {
            noVowels += c;
        } else {
            switch (tolower(c)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    continue;
                default:
                    noVowels += c;
            }
        }
    }
    return noVowels;
}