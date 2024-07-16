#include <vector>
#include <iostream>
using namespace std;

vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    vector<int> leaders;
    
    if(n == 0)
        return res;
    
    res.push_back(arr[n-1]);
    
    int maxSoFar = arr.back();
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= maxSoFar){
            leaders.push_back(maxSoFar);
            maxSoFar = arr[i];
        }
    }
    res = leaders;
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersVec = calculateLeaders(arr);
    for(int i:leadersVec){
        cout << i << " ";
    }
    return 0;
}