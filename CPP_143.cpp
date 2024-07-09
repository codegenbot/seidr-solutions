```
#include <cstddef>
#include <string>

bool is_prime(size_t n) {
    if (n <= 1)
        return false;
    for (size_t i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    size_t start = 0;
    for (size_t end = 0; end <= sentence.size(); ) {
        if (!is_prime(sentence.find(' ', end))) {
            end = sentence.find(' ', end);
        } else {
            result += sentence.substr(start, end - start) + " ";
            start = end + 1;
        }
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    string output = words_in_sentence(sentence);
    cout << "Output: " << output << endl;
    return 0;
}