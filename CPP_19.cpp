#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

string sort_numbers(string numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}

map<string, int> numMap = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> numList;
    string currNum = "";
    for (char c : numbers) {
        if (c == ' ') {
            numList.push_back(currNum);
            currNum = "";
        } else {
            currNum += c;
        }
    }
    numList.push_back(currNum);

    sort(numList.begin(), numList.end(), [&](const string &a, const string &b) {
        return numMap[a] < numMap[b];
    });

    string sortedNumbers = "";
    for (const string &num : numList) {
        sortedNumbers += num + " ";
    }
    sortedNumbers.pop_back();
    return sortedNumbers;
}