#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.length();
    for(int i=n-2; i>=1; i--){
        if(vowels.find(word[i]) != string::npos && !isVowel(word[i-1]) && !isVowel(word[i+1])){
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    assert(get_closest_vowel("Input") == "u");
    assert(get_closest_vowel("Testing") == "i");
    assert(get_closest_vowel("Today") == "");
    
    cout << "All test cases pass" << endl;

    return 0;
}