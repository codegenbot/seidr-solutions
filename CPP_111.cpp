#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <unordered_map>
#include <cassert>
#include <ext/hashtable.h>

using namespace std;

multimap<char, int> histogram(string test) {
    multimap<char, int> result;
    if (test.empty()) return result;

    for (char c : test) {
        char ch = tolower(c);
        if (ch != ' ') { 
            if (!result.count(ch)) result[ch] = 0;
            result[ch]++;
        }
    }

    int maxCount = 0;
    multimap<char, int> maxCountMap;

    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            maxCountMap.clear();
            maxCountMap.insert(p);
        } else if (p.second == maxCount) {
            maxCountMap.insert(p);
        }
    }

    return maxCountMap;
}

int main1() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    multimap<char, int> hist = histogram(input);
    for (auto& p : hist) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}

int main2() {
    assert(histogram("a") == {{'a', 1}});
    return 0;
}