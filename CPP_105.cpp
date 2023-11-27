#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cassert>

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

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            result.push_back(digitMap[arr[i]]);
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

int main(){
    assert (issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));

    return 0;
}