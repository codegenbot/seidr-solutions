#include <string>

string get_closest_vowel(string word);

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.length();
    for (int i = n - 2; i >= 0; i--) {
        if (vowels.find(word[i]) != string::npos && !islower(word[i-1]) && !islower(word[i+1])) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    string input;
    std::cout << "Enter a word: ";
    std::cin >> input;
    std::cout << "Closest vowel: " << get_closest_vowel(input) << std::endl;
    return 0;
}