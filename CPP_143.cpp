#include <vector>

string words_in_sentence(string sentence) {
    vector<int> primeWordLengths;
    for (const string& word : split(sentence, ' ')) {
        int length = word.length();
        bool isPrime = true;
        if (length > 1) {
            for (int i = 2; i * i <= length; ++i) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            primeWordLengths.push_back(length);
        }
    }

    string result;
    for (const int& length : primeWordLengths) {
        for (const string& word : split(sentence, ' ')) {
            if (word.length() == length) {
                result += word + " ";
                break;
            }
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do {
        pos = str.find(delimiter, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos - prev);
        tokens.push_back(token);
        prev = pos + 1;
    } while (pos < str.length());
    return tokens;
}