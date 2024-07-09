#include <iostream>
#include <string>
#include <cassert>

string get_closest_vowel(string word) {
    string vowels = "AEIOUaeiou";
    string result = "";
    bool foundConsonant = false;
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            if (foundConsonant) {
                result = word[i];
                break;
            }
        } else {
            foundConsonant = true;
        }
    }
    
    return result;
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}