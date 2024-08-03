#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;

string sort_numbers(string numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}

string sort_numbers(string numbers){
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
    
    map<int, string> revNumMap;
    for (auto const& pair : numMap) {
        revNumMap[pair.second] = pair.first;
    }
    
    vector<int> sortedNums;
    stringstream ss(numbers);
    string word;
    while (ss >> word) {
        sortedNums.push_back(numMap[word]);
    }
    
    sort(sortedNums.begin(), sortedNums.end());
    
    string result;
    for (int num : sortedNums) {
        if (!result.empty()) {
            result += " ";
        }
        result += revNumMap[num];
    }
    
    return result;
}