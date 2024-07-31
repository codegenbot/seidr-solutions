#include <iostream>
#include <string>
#include <cassert>
using namespace std;

char get_closest_vowel(string word);

int main() {
    assert(get_closest_vowel("Above") == 'o');   
    return 0;
}

char get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return word[i];
        }
    }
    return '\0';  // Return null character if no valid vowel found
}