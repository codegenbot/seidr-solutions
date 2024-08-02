#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            if (!isalpha(word[i - 1]) || !isalpha(word[i + 1])) {
                continue;
            }
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    assert(get_closest_vowel("hello") == "o");
    assert(get_closest_vowel("fly") == "");
    assert(get_closest_vowel("puzzle") == "u");
    assert(get_closest_vowel("strength") == "e");

    return 0;
}