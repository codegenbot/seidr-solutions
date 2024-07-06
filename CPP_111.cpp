#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return map<char, int>();

    string letters = test;
    for (char c : unique(letters.begin(), letters.end())) {
        int count = 0;
        size_t pos = 0;
        while ((pos = letters.find(c, pos)) != string::npos) {
            count++;
            pos += 1; // skip the same character
        }
        if (count > 0) result[c] = count;
    }

    int maxCount = 0;
    map<char, int> maxCountMap;
    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap.clear();
            maxCountMap[static_cast<char>(pair.first)] = pair.second; // add static cast here
        } else if (pair.second == maxCount)
            maxCountMap[static_cast<char>(pair.first)] = pair.second; // add static cast here
    }

    return maxCountMap;
}

int main() {
    string test;
    cout << "Enter a string: ";
    getline(cin, test);
    
    map<char, int> result = histogram(test);

    if (!result.empty()) {
        for (auto& pair : result) {
            cout << "Character '" << pair.first << "' appears " << pair.second << " times." << endl;
        }
    } else
        cout << "No characters found in the string." << endl;

    return 0;
}