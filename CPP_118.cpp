#include <iostream>
#include <string>
using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    string result = "";

    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i - 1; j > 0; j--) {
                if (vowels.find(word[j]) != string::npos) {
                    result = word[j];
                    return result;
                }
            }
        }
    }

    return result;
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}