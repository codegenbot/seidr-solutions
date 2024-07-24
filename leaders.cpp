```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    if(n == 0)
        return res;
        
    int maxRight = arr[n-1];
    res.push_back(maxRight);
    
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] > maxRight) {
            maxRight = arr[i];
            res.push_back(maxRight);
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 3};
    vector<int> result = leaders(arr);
    return 0;
}