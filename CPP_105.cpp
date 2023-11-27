#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cassert>

using namespace std;

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sortedArr;
    map<int, string> numMap;
    
    numMap[1] = "One";
    numMap[2] = "Two";
    numMap[3] = "Three";
    numMap[4] = "Four";
    numMap[5] = "Five";
    numMap[6] = "Six";
    numMap[7] = "Seven";
    numMap[8] = "Eight";
    numMap[9] = "Nine";
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }
    
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    
    for(int i = 0; i < sortedArr.size(); i++){
        result.push_back(numMap[sortedArr[i]]);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
  
    return 0;
}