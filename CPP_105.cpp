#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

vector<string> by_length(vector<int> arr);

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<string> result = by_length(arr);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}

vector<string> by_length(vector<int> arr) {
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
    
    vector<int> sortedArr;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            sortedArr.push_back(arr[i]);
        }
    }
    
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    
    for (int i = 0; i < sortedArr.size(); i++) {
        result.push_back(digitMap[sortedArr[i]]);
    }
    
    return result;
}