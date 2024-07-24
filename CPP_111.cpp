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

    for (const auto& [ch, count] : result) {
        if (count > maxCount) {
            maxCount = count;
            maxCountMap.clear();
            maxCountMap[ch] = count;
        } else if (count == maxCount) {
            if (maxCount > 0) {
                maxCountMap[ch] = count;
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
    for (const auto& [ch, count] : hist) {
        cout << ch << ": " << count << endl;
    }

    return 0;
}