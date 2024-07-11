#include <string>
#include <map>
#include <cctype>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string str = test;
    for (char c : str) {
        if (!isalpha(c)) continue; // ignore non-alphabetic characters
        char temp = isupper(c) ? tolower(c) : toupper(c);
        ++result[temp];
    }

    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) maxCount = it->second;
    }

    map<char, int> maxResult;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount)
            maxResult[it->first] = it->second;
    }

    return maxResult;
}