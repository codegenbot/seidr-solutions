#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    int count = 0;
    for (const auto &word : split(sentence, ' ')) {
        if (is_prime(word.length())) {
            if (count > 0) {
                result += " ";
            }
            result += word;
            count++;
        }
    }
    return result;
}

vector<string> split(const string &s, char c) {
    vector<string> v;
    size_t i = 0;
    while ((i = s.find(c)) != string::npos) {
        v.push_back(s.substr(0, i));
        s.erase(0, i + 1);
    }
    v.push_back(s);
    return v;
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}