#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    int maxCount = 0;
    for (const auto& word : split(test)) {
        char c = word[0];
        int count = 0;
        for (const auto& w : split(word)) {
            if (w == c) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
        result[c] = count;
    }
    map<char, int> mostFrequent;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            mostFrequent[pair.first] = pair.second;
        }
    }
    return mostFrequent;
}

vector<string> split(string s) {
    vector<string> res;
    string temp;
    for (char c : s) {
        if (c != ' ') {
            temp += c;
        } else {
            res.push_back(temp);
            temp = "";
        }
    }
    if (!temp.empty()) {
        res.push_back(temp);
    }
    return res;
}