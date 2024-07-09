#include <string>
#include <cassert>
using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = word.size() - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i-1]) && !isalpha(word[i+1])) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Hello") == "o");
    assert(get_closest_vowel("world") == "");
    return 0;
}