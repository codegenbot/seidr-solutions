#include <string>
using namespace std;

string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isvowel(word[right])) {
            left = right + 1;
            break;
        }
    }
    
    for (int i = left; i < word.size(); ++i) {
        if (isvowel(word[i])) {
            return string(1, topper(word[i]));
        }
    }
    
    return "";
}

bool isvowel(char c) {
    c = topper(c);
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

char topper(char c) {
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    else
        return c;
}