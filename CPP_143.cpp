#include<string>
#include<vector>
using namespace std;

vector<string> split(const string& str, char symbol) {
    vector<string> tokens;
    size_t start = 0;
    size_t end = str.find(symbol);
    while (end != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(symbol, start);
    }
    tokens.push_back(str.substr(start));
    return tokens;
}

string words_in_sentence(string sentence) {
    string result = "";
    for (const auto& word : split(sentence, ' ')) {
        int len = word.length();
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