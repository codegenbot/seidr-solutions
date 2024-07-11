#include <string>

string get_closest_vowel(string word);

int main() {
    string input;
    std::cin >> input;
    std::cout << get_closest_vowel(input) << std::endl;
}

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i-1]) && !isalpha(word[i+1])) {
            return string(1, word[i]);
        }
    }
    return "";
}