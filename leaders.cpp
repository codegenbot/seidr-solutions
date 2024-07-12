```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 1) {
        return arr;
    }
    
    int maxRight = arr[n - 1];
    result.push_back(maxRight);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {};
    leaders(arr);
    return 0;
}