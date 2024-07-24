#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

unordered_multimap<char, int> histogram(string test) {
    unordered_multimap<char, int> result;
    if (test.empty()) return result;

    for (char c : test) {
        char ch = tolower(c);
        if (ch != ' ') { 
            if (!result.count(ch)) result[ch] = 0;
            result[ch]++;
        }
    }

    int maxCount = 0;
    unordered_multimap<char, int> maxCountMap;

    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            maxCountMap.clear();
            maxCountMap.insert(p);
        } else if (p.second == maxCount) {
            if (maxCount > 0) {
                maxCountMap.insert(p);
            }
        }
    }

    return maxCountMap;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    unordered_multimap<char, int> hist = histogram(input);
    for (auto& p : hist) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}