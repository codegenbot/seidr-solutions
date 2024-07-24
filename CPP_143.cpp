#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int len = 0;
    for (const auto& word : split(sentence, ' ')) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
        len++;
    }
    return result.substr(0, len - 1);
}

vector<string> split(const string& str, char ch) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(ch)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
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