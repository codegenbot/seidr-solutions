#include <string>
#include <cassert>

using namespace std;

string get_closest_vowel(string word);

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.size();

    for (int i = n - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos && vowels.find(word[i + 1]) == string::npos && vowels.find(word[i - 1]) == string::npos) {
            return string(1, word[i]);
        }
    }

    return "";
}