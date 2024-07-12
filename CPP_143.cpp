```cpp
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

std::vector<std::string> split(const std::string& str, const char* delim) {
    size_t pos = 0;
    std::vector<std::string> tokens;
    while ((pos = str.find(delim)) != std::string::npos) {
        tokens.push_back(std::to_string(str.substr(0, pos)));
        str.erase(0, pos + strlen(delim));
    }
    tokens.push_back(std::to_string(str));
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
    return result.empty() ? "" : result.substr(0, result.size() - 1);
}

int main() {
    assert(words_in_sentence("here is") == "is");
    return 0;
}