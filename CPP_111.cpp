#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

multimap<char, int> histogram(string test) {
    multimap<char, int> result;
    if (test.empty()) return result;

    for (char c : test) {
        char ch = tolower(c);
        if (ch != ' ') { 
            if (!result.count(ch)) result.insert({ch, 0});
            result.find(ch)->second++;
        }
    }

    int maxCount = 0;
    multimap<char, int> maxCountMap;

    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            maxCountMap.clear();
            maxCountMap.insert({p.first, p.second});
        } else if (p.second == maxCount) {
            maxCountMap.insert({p.first, p.second});
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
    assert(histogram("a").size() == 1 && histogram("a").begin()->second == 1);
    return 0;
}