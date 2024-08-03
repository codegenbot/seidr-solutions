#include <string>
#include <vector>

#include <algorithm>
#include <sstream>

string words_in_sentence(string sentence) {
    vector<int> lengths;
    string result = "";
    
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            lengths.push_back(word.length());
            result += word + " ";
        }
    }
    
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& s, const string& delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    std::stringstream ss(s);
    while (std::getline(ss, delimiter)) {
        tokens.push_back(delimiter);
    }
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}