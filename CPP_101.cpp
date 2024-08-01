#include <sstream>

vector<string> words_string(string s) {
    istringstream iss(s);
    vector<string> result;
    string word;

    while (iss >> word) {
        result.push_back(word);
    }

    return result;
}