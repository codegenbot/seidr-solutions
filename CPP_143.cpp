#include <vector>

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;

    for (const auto& word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}

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

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    size_t prev = 0, pos = 0;

    do {
        pos = str.find(delimiter, prev);
        if (pos == string::npos) {
            pos = str.length();
        }
        string token = str.substr(prev, pos - prev);
        if (!token.empty()) {
            tokens.push_back(token);
        }
        prev = pos + 1;
    } while (pos != string::npos);

    return tokens;
}