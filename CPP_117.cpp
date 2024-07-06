#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!a[i].compare(0, a[i].size(), b[i]) == 0) { 
            return false;
        }
    }
    return true;
}

std::vector<std::string> select_words(const std::vector<std::string>& input_vector, const int k) {
    std::sort(input_vector.begin(), input_vector.end());
    return std::vector<std::string>(input_vector.begin() + input_vector.size() - k, input_vector.end());
}

int main() {
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;

    std::vector<std::string> words;
    for (int i = 0; i < n; i++) {
        std::string word;
        std::cout << "Enter word " << i + 1 << ": ";
        std::cin >> word;
        words.push_back(word);
    }

    int k;
    std::cout << "Enter the number of last words to compare: ";
    std::cin >> k;

    std::vector<std::string> first_half = select_words(words, k);

    if (first_half.size() < 2) {
        std::cout << "Not enough words for comparison.\n";
    } else {
        std::vector<std::string> second_half(words.begin() + k, words.end());

        if (issame(first_half, second_half)) {
            std::cout << "The last " << k << " words are the same as all remaining words.\n";
        } else {
            std::cout << "The last " << k << " words are not the same as all remaining words.\n";
        }
    }

    return 0;
}