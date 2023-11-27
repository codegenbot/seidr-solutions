#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<string> result;

    // Sort the integers between 1 and 9 inclusive
    vector<int> sortedArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sortedArr.push_back(num);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    // Reverse the sorted array and replace each digit by its corresponding name
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
    reverse(sortedArr.begin(), sortedArr.end());
    for (int num : sortedArr) {
        result.push_back(digitNames[num]);
    }

    return result;
}

int main() {
    vector<int> arr = {2, 1, 1, 4, 5, 8, 2, 3};
    vector<string> result = by_length(arr);

    for (string numName : result) {
        cout << numName << " ";
    }
    cout << endl;

    return 0;
}