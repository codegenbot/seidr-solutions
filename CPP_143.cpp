#include <string>
#include <algorithm>

std::string words_in_sentence(std::string sentence) {
    std::string result = "";
    int len = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            if (is_prime(len)) {
                result += sentence.substr(len - i, i - len + 1) + " ";
            }
            len = 0;
        } else {
            len++;
        }
    }
    if (is_prime(len)) {
        result += sentence.substr(len);
    }
    return result;

}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;

}

int main() {
    assert(words_in_sentence("here is") == "is");
    // Add more test cases as needed
    return 0;
}