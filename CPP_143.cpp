#include <string>
#include <cassert>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
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
    assert(words_in_sentence("hello world cpp contest") == "hello cpp ");
    assert(words_in_sentence("the quick brown fox jumps over the lazy dog") == "the quick fox jumps ");
    assert(words_in_sentence("abc def ghi jkl") == "abc ghi ");
    assert(words_in_sentence("programming is fun") == "is fun");
    return 0;
}