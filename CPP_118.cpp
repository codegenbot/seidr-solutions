#include <string>
using namespace std;

string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.length() - 1; right >= 0 && !isVowel(word[right]); --right, ++left) {}
    
    if (!isVowel(word[right])) return "";
    
    return string(1, tolower(word[right]));
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}