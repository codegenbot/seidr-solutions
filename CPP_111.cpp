#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

unordered_map<char, int> histogram(string test) {
    unordered_map<char, int> result;
    if (test.empty()) return result;

    for (char c : test) {
        char ch = tolower(c);
        if (ch != ' ') { 
            if (!result.count(ch)) result[ch] = 0;
            result[ch]++;
        }
    }

    int maxCount = 0;
    unordered_map<char, int> maxCountMap;

    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            maxCountMap.clear();
            maxCountMap[p.first] = p.second;
        } else if (p.second == maxCount) {
            maxCountMap[p.first] = p.second;
        }
    }

    return maxCountMap;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    unordered_map<char, int> hist = histogram(input);
    for (auto& p : hist) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}

int main2() {
    assert(histogram("a") == {{'a', 1}});
    return 0;
}