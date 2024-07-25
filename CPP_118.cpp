```cpp
#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string get_closest_vowel(string word) {
    int left = 0;
    while (left < word.length() && !isvowel(word[left])) {
        left++;
    }
    if (left == word.length()) return "";
    
    int right = word.length();
    while (right > 0 && !isvowel(word[right - 1])) {
        right--;
    }
    if (right == 0) return "";
    
    for (int i = left; i < right; i++) {
        if (isvowel(word[i])) {
            return word.substr(i, 1);
        }
    }
    return "";
}

int main() {
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << "The closest vowel is: " << get_closest_vowel(word) << endl;
    return 0;
}