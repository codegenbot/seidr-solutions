#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    string word;
    int maxCount = 0;

    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                if (result.find(word[0]) != result.end())
                    result[word[0]]++;
                else
                    result[word[0]] = 1;
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        if (result.find(word[0]) != result.end())
            result[word[0]]++;
        else
            result[word[0]] = 1;
    }

    int maxCountNow = 0;
    vector<pair<char, int>> maxCountLetters;

    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCountNow) {
            maxCountNow = it->second;
            maxCountLetters.clear();
            maxCountLetters.push_back({it->first, it->second});
        } else if (it->second == maxCountNow) {
            maxCountLetters.push_back({it->first, it->second});
        }
    }

    return map<char, int>(maxCountLetters.begin(), maxCountLetters.end());
}