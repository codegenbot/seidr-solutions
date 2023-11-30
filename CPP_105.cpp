#include <string>
#include <cassert>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> digitMap;
    digitMap[1] = "One";
    digitMap[2] = "Two";
    digitMap[3] = "Three";
    digitMap[4] = "Four";
    digitMap[5] = "Five";
    digitMap[6] = "Six";
    digitMap[7] = "Seven";
    digitMap[8] = "Eight";
    digitMap[9] = "Nine";

    // Sort the integers between 1 and 9 inclusive
    vector<int> sortedArr;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    // Reverse the sorted array and replace each digit by its corresponding name
    for (int i = sortedArr.size() - 1; i >= 0; i--) {
        result.push_back(digitMap[sortedArr[i]]);
    }

    return result;
}