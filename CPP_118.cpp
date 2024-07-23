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
    int min_dist = INT_MAX;
    char closest_vowel = '0';
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(word[i])) {
            for (int j = i + 1; j <= word.size(); ++j) {
                if (isvowl(word[j])) {
                    int dist = j - i;
                    if (dist < min_dist) {
                        min_dist = dist;
                        closest_vowel = tolower(word[j]);
                    }
                }
            }
        }
    }
    return std::string(1, closest_vowel);
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}