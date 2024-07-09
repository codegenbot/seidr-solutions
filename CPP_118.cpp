#include <iostream>
#include <string>

string get_closest_vowel(string word);

int main() {
    string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    string closest_vowel = get_closest_vowel(word);

    std::cout << "Closest vowel is: " << closest_vowel << std::endl;

    return 0;
}

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    char closest_vowel = ' ';

    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i + 1; j < word.size(); j++) {
                if (vowels.find(word[j]) == string::npos) {
                    int distance = j - i;
                    if (distance < closest_distance) {
                        closest_distance = distance;
                        closest_vowel = word[i];
                    }
                    break;
                }
            }
        }
    }

    if (closest_vowel == ' ') {
        return "";
    } else {
        return string(1, closest_vowel);
    }
}