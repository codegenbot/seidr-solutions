#include<string>
using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int len;
    for (const auto& word : split(sentence, ' ')) {
        len = word.length();
        bool isPrime = true;
        if (len > 1) {
            for (int i = 2; i * i <= len; i++) {
                if (len % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
                result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& str, char symbol) {
    vector<string> tokens;
    size_t start = 0;
    size_t end = str.find(symbol);
    while (end != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(symbol, start);
    }
    tokens.push_back(str.substr(start));
    return tokens;
}