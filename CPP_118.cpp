#include <string>
#include <cassert>

using namespace std;

string get_closest_vowel(string word);

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}

string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 2; i > 0; --i) {
        if (!is_vowel(word[i]) && is_vowel(word[i - 1]) && !is_vowel(word[i + 1])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}