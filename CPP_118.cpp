Here is your required code:

```cpp
#include <string>

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    std::string closestVowel = get_closest_vowel(word);
    if (!closestVowel.empty()) {
        std::cout << "The closest vowel is " << closestVowel << "." << std::endl;
    } else {
        std::cout << "No vowels are present in the given word." << std::endl;
    }

    return 0;
}

string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; i--) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            for (int j = i - 1; j >= 0; j--) {
                if ((word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u' &&
                    (word[j] != 'A' && word[j] != 'E' && word[j] != 'I' && word[j] != 'O' && word[j] != 'U')) {
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}