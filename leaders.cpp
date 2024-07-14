#include <vector>
#include <iostream>
using namespace std;

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int lastLeader = arr.back();
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= lastLeader) {
            res.push_back(arr[i]);
            lastLeader = arr[i];
        }
    }
    
    std::reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 3, 7, 1, 6};
    vector<int> res = leaders(arr);
    for(int i:res) {
        cout << i << " ";
    }
    return 0;
}