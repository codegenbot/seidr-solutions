#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;
    
    for (const auto& word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    
    return result.substr(0, result.size() - 1);
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

vector<string> split(const string& s, char c) {
    vector<string> result;
    size_t pos = 0;
    size_t prevPos = 0;
    
    while ((pos = s.find(c, prevPos)) != string::npos) {
        result.push_back(s.substr(prevPos, pos - prevPos));
        prevPos = pos + 1;
    }
    
    result.push_back(s.substr(prevPos));
    return result;
}