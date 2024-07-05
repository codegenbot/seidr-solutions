#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <string>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

std::string words_in_sentence(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word, result;
    while (ss >> word) {
        if (isPrime(word.length())) {
            if (!result.empty()) result += " ";
            result += word;
        }
    }
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << words_in_sentence(sentence) << std::endl;
    return 0;
}