#include <vector>
#include <algorithm>
#include <string>

using namespace std;

std::string words_in_sentence(std::string sentence) {
    std::vector<int> lengths;
    std::string result = "";
    
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            lengths.push_back(word.length());
            result += word + " ";
        }
    }
    
    return result.substr(0, result.size() - 1);
}

std::vector<std::string> split(const std::string& s, const std::string& delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        tokens.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    tokens.push_back(s);
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    assert(words_in_sentence("here is") == "is");
    return 0;
}