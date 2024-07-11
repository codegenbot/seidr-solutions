#include <string>

string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
            word[i] == 'U') {
            int left = i - 1;
            while (left >= 0 && (word[left] != 'a' && word[left] != 'e' && 
                word[left] != 'i' && word[left] != 'o' && word[left] != 'u' &&
                word[left] != 'A' && word[left] != 'E' && word[left] != 'I' && 
                word[left] != 'O' && word[left] != 'U')) {
                left--;
            }
            int right = i + 1;
            while (right < word.length() && (word[right] != 'a' && word[right] != 'e' &&
                word[right] != 'i' && word[right] != 'o' && word[right] != 'u' &&
                word[right] != 'A' && word[right] != 'E' && word[right] != 'I' && 
                word[right] != 'O' && word[right] != 'U')) {
                right++;
            }
            if (left >= 0) {
                return word.substr(left + 1, i - left);
            } else if (right < word.length()) {
                return word.substr(0, right);
            }
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}