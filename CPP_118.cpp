#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string get_closest_vowel(string word);

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    for (int i = word.size() - 2; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i-1]) && !isalpha(word[i+1])) {
            return string(1, word[i]);
        }
    }
    return "";
}