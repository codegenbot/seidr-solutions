#include <algorithm>
#include <cctype>

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
        } else if (p.second == maxCount) {
            mostFrequent.push_back(p);
        }
    }

    sort(mostFrequent.begin(), mostFrequent.end());
    reverse(mostFrequent.begin(), mostFrequent.end());

    map<char, int> finalResult;
    for (auto& p : mostFrequent) {
        if (finalResult.empty() || p.second < finalResult.rbegin()->second)
            continue;
        finalResult[p.first] = p.second;
    }

    return finalResult;
}