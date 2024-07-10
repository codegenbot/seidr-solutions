#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string get_closest_vowel(string word) {
    for (int i = 0; i < word.size(); ++i) {
        if (isvowel(word[i])) return word.substr(i);
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}