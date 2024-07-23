#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (find(vowels.begin(), vowels.end(), tolower(c)) != vowels.end());
}

std::string get_closest_vowel(std::string word) {
    int closest = -1;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(word[i])) {
            if (closest == -1)
                closest = i;
            else
                return string(1, word[closest]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}