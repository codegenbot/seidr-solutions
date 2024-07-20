#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<int> wordLengths;
    string result = "";
    
    for (const auto& word : split(sentence, ' ')) {
        int length = word.length();
        bool isPrime = true;
        
        if (length > 1) {
            for (int i = 2; i * i <= length; ++i) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) {
                result += word + " ";
                wordLengths.push_back(length);
            }
        }
    }
    
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(c)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}