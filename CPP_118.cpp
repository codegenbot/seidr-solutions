#include <string>
#include <cassert>

using namespace std;

string get_closest_vowel(const string& word) {
    string vowels = "AEIOUaeiou";

    for (int i = word.length() - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos && (i == 0 || !isalpha(word[i - 1])) && (i == word.length() - 1 || !isalpha(word[i + 1]))) {
            return string(1, word[i]);
        }
    }

    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");

    return 0;
}