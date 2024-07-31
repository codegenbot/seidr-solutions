```cpp
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool sameCase(char c1, char c2) {
    return (isupper(c1) && isupper(c2)) || (islower(c1) && islower(c2));
}

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : letters) {
        if (!isalpha(c)) continue; // skip non-alphabet characters
        char letter = tolower(c);
        result[letter] += 1;
    }

    int maxCount = 0;
    vector<pair<char, int>> mostFrequent;
    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            mostFrequent.clear();
            mostFrequent.push_back(p);
        } else if (p.second == maxCount && sameCase(c, p.first)) {
            mostFrequent.push_back(p);
        }
    }

    map<char, int> finalResult;
    for (auto& p : mostFrequent) {
        finalResult[p.first] = p.second;
    }

    return finalResult;
}