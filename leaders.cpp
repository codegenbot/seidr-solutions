```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0)
        return result;
    
    result.push_back(arr[n-1]);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > result.back()) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}

int main() { leaders({16,17,4,3,5,2}); return 0; }