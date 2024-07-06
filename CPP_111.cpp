```cpp
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    vector<char> letters(test.begin(), test.end());
    for (char c : letters) {
        int count = 0;
        size_t pos = 0;
        while ((pos = test.find(c, pos)) != string::npos) {
            count++;
            pos += 1; // skip the same character
        }
        if (count > 0) result[c] = count;
    }

    map<char, int> maxCountMap;
    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap.clear();
            maxCountMap[pair.first] = pair.second;
        } else if (pair.second == maxCount)
            maxCountMap[pair.first] = pair.second;
    }

    return maxCountMap;
}

int main() {
    string test;
    cout << "Enter a string: ";
    cin >> test;
    map<char, int> result = histogram(test);
    for (auto& pair : result) {
        cout << "Character: " << pair.first << ", Count: " << pair.second << endl;
    }
    return 0;
}