#include <string>
#include <cassert>

bool is_prime(int n) {
    // Implementation of is_prime function
}

std::string words_in_sentence(const std::string& sentence) {
    std::string result = "";
    std::string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            if (is_prime(word.size())) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (is_prime(word.size())) {
        result += word;
    }
    return result;
}

int main() {
    // Test cases
    assert(words_in_sentence("here is") == "is");
    
    return 0;
}