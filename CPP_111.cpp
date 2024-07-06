#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : unique_copy(letters.begin(), letters.end())) { // include the algorithm
        int count = 0;
        size_t pos = 0;
        while ((pos = letters.find(c, pos)) != string::npos) {
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