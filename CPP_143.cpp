#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

vector<string> split(const string& str, const char* delim) {
    size_t pos = 0;
    vector<string> tokens;
    while ((pos = str.find(delim)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + strlen(delim));
    }
    tokens.push_back(str);
    return tokens;
}

string words_in_sentence(string sentence) {
    string result;
    size_t strLen = sentence.size();
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.empty() ? "" : result.substr(0, result.size() - 1);
}

int main() {
    assert(words_in_sentence("here is") == "is");
    cout << words_in_sentence("hello world") << endl;
    return 0;
}