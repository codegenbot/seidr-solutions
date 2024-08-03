#include <iostream>
#include <string>
#include <cassert>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

std::string words_in_sentence(std::string sentence) {
    std::string result = "";
    std::string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            if (is_prime(word.length())) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (is_prime(word.length())) {
        result += word;
    }
    return result;
}

void solve_problem() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << words_in_sentence(sentence);
}

int main() {
    solve_problem();
    return 0;
}