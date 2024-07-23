#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (find(vowels.begin(), vowels.end(), tolower(c)) != vowels.end());
}

std::string get_closest_vowel(std::string word) {
    int minIndex = -1;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(word[i])) {
            if (minIndex == -1)
                minIndex = i;
        }
    }
    if (minIndex != -1)
        return std::string(1, tolower(word[minIndex]));
    else
        return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}