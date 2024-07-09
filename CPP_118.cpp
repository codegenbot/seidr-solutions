#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1]) && islower(word[i-2]))
            return "Y";
        if (ispunct(word[i]) || isdigit(word[i])) break;
        if (isvowel(word[i])) return string(1, tolower(word[i]));
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}