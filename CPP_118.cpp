#include <iostream>
#include <string>
#include <cctype> // for tolower()

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string get_closest_vowel(string word) { 
    int left = 0;
    for (int right = word.length() - 1; right >= 0; --right) {
        if (!isvowel(word[right])) {
            ++left;
        } else if (left > 0) {
            return string(1, word[right]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}