#include <iostream>
#include <sstream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

int main_custom_name() {
    if(histogram("a") == map<char, int>{{'a', 1}}) {
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }

    return 0;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> maxCountLetters;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxCountLetters[entry.first] = entry.second;
        }
    }
    return maxCountLetters;
}