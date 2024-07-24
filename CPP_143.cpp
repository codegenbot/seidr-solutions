#include <vector>
#include <string>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

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

vector<string> split(const string& str, char delim) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = str.find(delim)) != string::npos) {
        result.push_back(str.substr(0, pos));
        str = str.substr(pos + 1);
    }
    result.push_back(str);
    return result;
}