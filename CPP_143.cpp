#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<int> wordLengths;
    string result = "";
    
    for (const auto &word : split(sentence, ' ')) {
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

vector<string> split(const string &sentence, char delimiter) {
    vector<string> result;
    size_t start = 0;
    size_t end = sentence.find(delimiter);
    
    while (end != string::npos) {
        result.push_back(sentence.substr(start, end - start));
        start = end + 1;
        end = sentence.find(delimiter, start);
    }
    
    result.push_back(sentence.substr(start));
    return result;
}