#include <string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    vector<string> words = split(sentence, ' ');
    for (string word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<string> split(string str, char ch) {
    vector<string> tokens;
    string token;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] == ch)
            continue;
        token += str[i];
        if ((i == len - 1) || (str[i + 1] == ch)) {
            tokens.push_back(token);
            token = "";
        }
    }
    return tokens;
}