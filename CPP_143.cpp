#include <vector>

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result = "";
    
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
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<string> split(const string& str, char ch) {
    vector<string> tokens;
    string token;
    for (char c : str) {
        if (c != ch) {
            token += c;
        } else if (!token.empty()) {
            tokens.push_back(token);
            token = "";
        }
    }
    if (!token.empty()) {
        tokens.push_back(token);
    }
    return tokens;
}