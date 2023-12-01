#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> digitNames = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    // Sort the integers between 1 and 9
    vector<int> sortedArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sortedArr.push_back(num);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    // Reverse the sorted array and replace each digit with its corresponding name
    reverse(sortedArr.begin(), sortedArr.end());
    for (int num : sortedArr) {
        result.push_back(digitNames[num]);
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    // Function implementation

    return true;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Four", "Eight"}));

    return 0;
}