#include <string>
using namespace std;

string get_closest_vowel(string word);

int main() {
    assert(get_closest_vowel("Above") == "o");
    // Add more test cases here

    return 0;
}

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.length();
    for (int i = n - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos && (i == 0 || !isalpha(word[i - 1])) && (i == n - 1 || !isalpha(word[i + 1]))) {
            return string(1, word[i]);
        }
    }
    return "y"; // Return 'y' if no other vowels found
}