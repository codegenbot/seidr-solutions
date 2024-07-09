#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    int maxCount = 0;
    char mostRepeatedChar = '\0';

    string lettersOnly = test;
    for (char& c : lettersOnly) {
        c = tolower(c);
    }

    for (const auto& pair : unique(lettersOnly)) {
        int count = 0;
        for (const auto& letter : lettersOnly) {
            if (letter == pair.second) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostRepeatedChar = pair.second;
        } else if (count == maxCount) {
            result[mostRepeatedChar] = maxCount;
        }
    }

    for (const auto& letter : lettersOnly) {
        if (letter == mostRepeatedChar) {
            result[letter] = maxCount;
        }
    }

    return result;
}