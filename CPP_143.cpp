#include <string>

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    std::string word = "";
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            int len = word.length();
            bool isPrime = true;
            for (int i = 2; i * i <= len; i++) {
                if (len % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime && len > 1) {
                result += word + " ";
            }
            word = "";
        }
    }
    int len = word.length();
    bool isPrime = true;
    for (int i = 2; i * i <= len; i++) {
        if (len % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime && len > 1) {
        result += word;
    }
    return result;
}

int main() {
    assert(words_in_sentence("here is") == "is");
    return 0;
}