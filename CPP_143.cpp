#include <iostream>
#include <string>
#include <cassert>
#include <sstream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

std::vector<std::string> split(const std::string& str, const std::string& token) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string tmp;

    while (std::getline(ss, tmp, token[0])) {
        tokens.push_back(tmp);
    }

    return tokens;
}

std::string words_in_sentence(std::string sentence) {
    std::string result;
    size_t strLen = sentence.size();
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    assert(words_in_sentence("here is") == "is");
    return 0;
}