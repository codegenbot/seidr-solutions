#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : letters) {
        if (result.find(c) == result.end())
            result[c] = 1;
        else
            result[c]++;
    }

    char maxLetter = *max_element(result.begin(), result.end(),
                                   [](pair<char, int> a, pair<char, int> b) { return a.second < b.second; }) -> first;

    map<char, int> maxCount;
    for (auto& p : result) {
        if (p.second == result[maxLetter])
            maxCount.insert({p.first, p.second});
    }

    return maxCount;
}