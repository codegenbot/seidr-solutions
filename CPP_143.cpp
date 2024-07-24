#include <string>
#include <cassert>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    string word = "";
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
    assert(words_in_sentence("The sky is blue today") == "sky blue");
    assert(words_in_sentence("Hello world") == "world");
    assert(words_in_sentence("Prime numbers are 2, 3, 5, 7, 11") == "numbers are ");
    assert(words_in_sentence("abc def ghi jkl") == "");
    
    return 0;
}