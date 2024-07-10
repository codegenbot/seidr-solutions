#include <iostream>
#include <string>

using namespace std;

bool isvowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool ispunct(char c) {
    return (c == '.' || c == ',' || c == '?' || c == '!');
}

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1]) && islower(word[i-2]))
            return "Y";
        if (ispunct(word[i]) || isdigit(word[i])) break;
        if (isvowel(word[i])) return word.substr(i);
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    cout << get_closest_vowel("Above");
    return 0;
}