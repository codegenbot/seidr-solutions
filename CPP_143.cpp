#include <vector>

string words_in_sentence(string sentence) {
    vector<int> primeNumbers;
    for (int i = 2; i <= 100; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primeNumbers.push_back(i);
    }

    string result;
    vector<string> words = split(sentence, ' ');
    for (string word : words) {
        int length = word.length();
        if (find(primeNumbers.begin(), primeNumbers.end(), length) != primeNumbers.end())
            result += word + " ";
    }
    return result.substr(0, result.length() - 1);
}

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    size_t prev = 0;
    while ((pos = str.find(delimiter, prev)) != string::npos) {
        string token = str.substr(prev, pos - prev);
        tokens.push_back(token);
        prev = pos + 1;
    }
    tokens.push_back(str.substr(prev));
    return tokens;
}