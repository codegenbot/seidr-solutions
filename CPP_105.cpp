#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr){
    vector<int> sortedArr;
    vector<string> result;

    // Sort the integers between 1 and 9 inclusive
    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    // Reverse the sorted array and replace each digit by its corresponding name
    for(int i=sortedArr.size()-1; i>=0; i--){
        string digitName;
        switch(sortedArr[i]){
            case 1:
                digitName = "One";
                break;
            case 2:
                digitName = "Two";
                break;
            case 3:
                digitName = "Three";
                break;
            case 4:
                digitName = "Four";
                break;
            case 5:
                digitName = "Five";
                break;
            case 6:
                digitName = "Six";
                break;
            case 7:
                digitName = "Seven";
                break;
            case 8:
                digitName = "Eight";
                break;
            case 9:
                digitName = "Nine";
                break;
            default:
                continue;
        }
        result.push_back(digitName);
    }
    return result;
}

int main() {
   assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
   return 0;
}