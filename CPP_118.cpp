```cpp
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    for (char vowel : vowels) {
        if (tolower(c) == vowel) {
            return true;
        }
    }
    return false;
}

std::string get_closest_vowel(std::string word) {
    int closest = -1;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(tolower(word[i])) && (closest == -1 || i < closest)) {
            closest = i;
        }
    }
    return (closest == -1) ? "" : string(1, tolower(word[closest]));
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}