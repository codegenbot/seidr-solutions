#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<int> lengths;
    string result = "";
    
    for (const auto& word : split(sentence, ' ')) {
        int len = word.size();
        bool isPrime = true;
        
        if (len > 1) {
            for (int i = 2; i * i <= len; i++) {
                if (len % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) {
                result += word + " ";
                lengths.push_back(len);
            }
        }
    }
    
    return result.substr(0, result.size() - 1);
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