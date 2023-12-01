#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

vector<string> by_length(vector<int> arr){
    vector<int> sortedArr;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    
    vector<string> result;
    map<int, string> numberMap;
    numberMap[1] = "One";
    numberMap[2] = "Two";
    numberMap[3] = "Three";
    numberMap[4] = "Four";
    numberMap[5] = "Five";
    numberMap[6] = "Six";
    numberMap[7] = "Seven";
    numberMap[8] = "Eight";
    numberMap[9] = "Nine";
    
    for(int i = 0; i < sortedArr.size(); i++){
        result.push_back(numberMap[sortedArr[i]]);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> &b){
    if(a.size() != b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert (issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}