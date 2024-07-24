```cpp
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    if (n == 0) return result; 
    int lastLeader = arr[n-1];
    result.push_back(lastLeader);
    
    for(int i = n-2; i >= 0; --i) {
        if(arr[i] >= lastLeader) {
            lastLeader = arr[i];
            result.push_back(lastLeader);
        }
    }
    
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> input = {1, 3, 4, 1, 5, 9};
    vector<int> result = leaders(input);
    for(int i : result) cout << i << " ";
    return 0;
}