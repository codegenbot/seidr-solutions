#include <iostream>
#include <string>
using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (find(vowels.begin(), vowels.end(), tolower(c)) != vowels.end());
}

std::string get_closest_vowel(std::string word) {
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(word[i])) {
            return std::string(1, tolower(word[i]));
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}