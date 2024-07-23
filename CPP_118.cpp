#include <iostream>
#include <string>

using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    for (char vowel : vowels) {
        if (tolower(c) == vowel) {
            return true;
        }
    }
    return false;
}

std::string get_closest_vowel(std::string word) {
    int closest = -1;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(tolower(word[i]))) {
            if (closest == -1)
                closest = i;
        }
    }
    return string(1, word.empty() ? "" : word[closest]);
}

int main() {
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}