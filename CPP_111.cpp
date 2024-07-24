```cpp
#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

map<char, int> histogram(string test = "") {
    map<char, int> result;
    if (test.empty()) return result;

    for (char c : test) {
        char ch = tolower(c);
        if (ch != ' ') { 
            if (!result.count(ch)) result[ch] = 0;
            result[ch]++;
        }
    }

    int maxCount = 0;
    map<char, int> maxCountMap;

    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap.clear();
            maxCountMap[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            if (maxCount > 0) {
                maxCountMap[pair.first] = pair.second;
            }
        }
    }

    return maxCountMap;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    map<char, int> hist = histogram(input);
    for (auto& pair : hist) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}