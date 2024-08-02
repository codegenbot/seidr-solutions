#include <iostream>
#include <string>

using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            if (!isalpha(word[i - 1]) || !isalpha(word[i + 1])) {
                continue;
            }
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    cout << get_closest_vowel("Above") << endl;
    cout << get_closest_vowel("Example") << endl;
    cout << get_closest_vowel("Hello") << endl;
    cout << get_closest_vowel("Algorithm") << endl;
    
    return 0;
}
