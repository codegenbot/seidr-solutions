#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.size() == 1 && result[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos) {
        int oddCount = 0;
        for (int i = 0; i < result[0].size(); ++i) {
            if (islower(result[0][i]) && i % 2 == 1) {
                oddCount++;
            }
        }
        result = {std::to_string(oddCount)};
    }
    return result;
}