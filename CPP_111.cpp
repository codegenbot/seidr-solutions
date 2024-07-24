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

    unordered_map<char, int> maxCountMap;

    for (auto& pair : result) {
        if (pair.second > maxCountMap.size()) {
            maxCountMap.clear();
            maxCountMap[pair.first] = pair.second;
        } else if (pair.second == maxCountMap.size()) {
            maxCountMap[pair.first] = pair.second;
        }
    }

    return maxCountMap;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    unordered_map<char, int> hist = histogram(input);
    for (auto& [ch, count] : hist) {
        cout << ch << ": " << count << endl;
    }

    return 0;
}