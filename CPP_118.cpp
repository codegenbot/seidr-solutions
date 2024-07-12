#include <string>
#include <cassert>
#include <cctype>

using namespace std;

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}