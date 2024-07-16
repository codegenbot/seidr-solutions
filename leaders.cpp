```cpp
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2, 3}; 
    vector<int> result = leaders(arr);
    for (int i=0; i<result.size(); i++) cout << result[i] << " "; 
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;

    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(arr[i]);
    }

    return res;
}