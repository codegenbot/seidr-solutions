#include <string>

std::string get_closest_vowel(std::string word) {
    int closest_index = -1;
    char closest_char = ' ';
    
    for (int i = 0; i < word.length(); i++) {
        if ((word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') ||
            (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')) {
            if (closest_index == -1) {
                closest_index = i;
                closest_char = tolower(word[i]);
            } else {
                for (int j = i - 1; j >= 0; j--) {
                    if ((word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u') &&
                        (word[j] != 'A' && word[j] != 'E' && word[j] != 'I' && word[j] != 'O' && word[j] != 'U')) {
                        closest_index = j;
                        closest_char = tolower(word[j]);
                    }
                }
            }
        }
    }

    if (closest_index == -1) return "";
    else return std::string(1, closest_char);
}

int main() {
    assert(get_closest_vowel("Above") == "o");
}