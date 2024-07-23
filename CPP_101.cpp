#include <vector>
#include <string>
using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            word += c;
        } else if (!word.empty()) {
            result.push_back(word);
            word = "";
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}