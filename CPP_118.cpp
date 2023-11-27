#include <iostream>
#include <string>

using namespace std;

string get_closest_vowel(string word) {
    string vowels = "AEIOUaeiou";
    int n = word.size();
    for (int i = n - 3; i >= 1; i--) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    // more test cases and code here
    return 0;
}