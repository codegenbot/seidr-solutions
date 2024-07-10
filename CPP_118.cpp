#include <string>
#include <cctype>

using namespace std;

string get_closest_vowel(string word) {
    for (int i = 0; i < word.size(); ++i) {
        if (isvowel(word[i])) return word.substr(i);
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
}