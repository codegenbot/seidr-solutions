#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0)
        return result;
        
    int current_leader = arr[n - 1];
    result.push_back(current_leader);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= current_leader) {
            current_leader = arr[i];
            result.push_back(current_leader);
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> arr = {12, 10, 8, 6};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}