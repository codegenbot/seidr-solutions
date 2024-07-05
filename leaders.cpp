```cpp
#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    for(int i = 0; i < n; ++i) {
        if(i == n - 1 || arr[i] >= arr[i + 1]) 
            result.push_back(arr[i]);
    }
    
    return result;
}

int main() {
    vector<int> input = {931, 891, 214, 39};
    vector<int> result = leaders(input);
    for (int x : result) cout << x << " ";
    return 0;
}