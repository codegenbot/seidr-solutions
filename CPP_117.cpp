#include <iostream>
#include <vector>

int count_consonants(std::string word) {
    int count = 0;
    std::string vowels = "aeiouAEIOU";
    for (char c : word) {
        if (isalpha(c) && vowels.find(c) == std::string::npos) {
            count++;
        }
    }
    return count;
}

bool issame(std::string s1, std::string s2) {
    return s1 == s2;
}

std::vector<std::string> select_words(std::string s, int n);

int main() {
    std::string input;
    int n;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);

    std::cout << "Enter number of consonants to search for: ";
    std::cin >> n;

    std::vector<std::string> selected = select_words(input, n);

    std::cout << "Words with " << n << " consonants are:\n";
    for (const std::string& word : selected) {
        std::cout << word << std::endl;
    }

    return 0;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word;
    for (char c : s) {
        if (c == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}