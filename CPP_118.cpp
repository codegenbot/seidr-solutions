```cpp
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (find(vowels.begin(), vowels.end(), tolower(c)) != vowels.end());
}

std::string get_closest_vowel(std::string word) {
    int minDist = INT_MAX;
    char closestVowel = '\0';
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(word[i])) {
            if(i < minDist) {
                minDist = i;
                closestVowel = tolower(word[i]);
            }
        }
    }
    return std::string(1, closestVowel).operator std::string();
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}