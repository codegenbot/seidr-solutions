#include <string>
#include <vector>

string words_in_sentence(string sentence){
    string result = "";
    for (const auto &word : split(sentence, " ")) {
        int len = word.length();
        bool is_prime = true;
        if (len > 1) {
            for (int i = 2; i * i <= len; ++i) {
                if (len % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        if (is_prime) {
            result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

vector<string> split(const string &s, char delim) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = s.find(delim)) != std::string::npos) {
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    result.push_back(s);
    return result;