```cpp
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

    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
            maxCountMap.clear();
            maxCountMap[it->first] = it->second;
        } else if (it->second == maxCount) {
            if (maxCount > 0) {
                maxCountMap[it->first] = it->second;
            }
        }
    }

    return maxCountMap;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    unordered_map<char, int> hist = histogram(input);
    for (auto it = hist.begin(); it != hist.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}