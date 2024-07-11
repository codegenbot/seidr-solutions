#include <vector>
#include <cmath>

string words_in_sentence(string sentence) {
    vector<string> words;
    string word;

    for (char c : sentence + " ") {
        if (c == ' ') {
            if (!word.empty() && is_prime(word.length())) {
                words.push_back(word);
            }
            word.clear();
        } else {
            word += c;
        }
    }

    string result;
    for (string w : words) {
        result += w + " ";
    }
    return result.substr(0, result.size() - 1);
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}