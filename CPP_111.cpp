#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string word;
    for (int i = 0; i < test.size(); i++) {
        char c = test[i];
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

    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); it++) {
        maxCount = max(maxCount, it->second);
    }

    map<char, int> maxMap;
    for (auto it = result.begin(); it != result.end(); it++) {
        if (it->second == maxCount) {
            maxMap[it->first] = it->second;
        }
    }

    return maxMap;
}