#include <string>
#include <map>
#include <algorithm>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string str = test + " ";
    int maxCount = 0;
    char mostRepeatedChar = ' ';

    for (char c : std::unique(std::begin(str), std::end(str))) {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == c) {
                count++;
            }
        }
        if (count > maxCount || (count == maxCount && mostRepeatedChar == ' ')) {
            maxCount = count;
            mostRepeatedChar = c;
        }
    }

    for (char c : std::unique(std::begin(str), std::end(str))) {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == c) {
                count++;
            }
        }
        if (count == maxCount) {
            result[c]++;
        }
    }

    return result;
}