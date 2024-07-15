#include <iostream>
#include <vector>

int count_consonants(std::string word) {
    int count = 0;
    for (char c : word) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' &&
            isalpha(c)) {
            count++;
        }
    }
    return count;
}

bool issame(std::string a, std::string b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin(), b.end(),
        [] (char c1, char c2) { return tolower(c1) == tolower(c2); });
}

std::vector<std::string> select_words(std::string s, int n);

int main() {
    std::string s;
    std::getline(std::cin, s);
    int n;
    std::cin >> n;

    std::vector<std::string> words = select_words(s, n);

    for (const std::string& word : words) {
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