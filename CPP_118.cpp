#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (find(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') != end(vowels));
}

std::string get_closest_vowel(std::string word) {
    int closest = -1;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(tolower(word[i])) || isvowl(upper(word[i]))) {
            if (closest == -1)
                closest = i;
            else
                return string(1, tolower(word[closest]));
        }
    }
    return closest == -1 ? "" : tolower(string(1, word[closest]));
}

int main() {
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}