#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string get_closest_vowel(const string& word) {
    auto is_vowel = [](char c) {
        string vowels = "aeiouAEIOU";
        return vowels.find(c) != string::npos;
    };

    int n = word.size();
    for (int i = n - 2; i > 0; --i) {
        if (!is_vowel(word[i]) && is_vowel(word[i - 1]) && !is_vowel(word[i - 2])) {
            return string(1, word[i - 1]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    cout << "All tests passed!" << endl;
    return 0;
}