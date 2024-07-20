#include <vector>
#include <string>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;

    for (auto word : words) {
        int len = word.length();
        if (isPrime(len)) {
            result += word + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}

vector<string> split(string str, char symbol) {
    vector<string> tokens;
    string token;
    for (auto c : str) {
        if (c == symbol) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}