#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string get_closest_vowel(const string& word) {
    for (int i = word.length() - 2; i > 0; --i) {
        if (isalpha(word[i]) && 
            strchr("aeiouAEIOU", word[i]) &&
            !strchr("aeiouAEIOU", word[i - 1]) &&
            !strchr("aeiouAEIOU", word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    // Add more test cases as needed
    return 0;
}