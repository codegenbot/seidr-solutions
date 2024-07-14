```cpp
#include <vector>
using namespace std;

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

int main() {
    #include <iostream>
    using namespace std;
    
    vector<int> arr = {1, 3, 4, 3, 2};
    vector<int> res = leaders(arr);
    for(int i:res) cout << i << " ";
    return 0;
}