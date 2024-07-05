#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <string>
#include <cassert>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

std::string words_in_sentence(std::string sentence) {
    std::istringstream iss(sentence);
    std::string word, result = "";
    while (iss >> word) {
        if (is_prime(word.length())) {
            if (!result.empty()) result += " ";
            result += word;
        }
    }
    return result;
}

int main() {
    assert(words_in_sentence("here is") == "is");
    assert(words_in_sentence("test sentence with prime length words") == "prime length words");
    std::cout << "All tests passed!" << std::endl;
    return 0;
}