```cpp
#include <vector>
using namespace std;

std::vector<int> leaders(const vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if (n == 0) return leaders;
    
    if (n == 1) return arr;
    
    int maxSoFar = arr.back();
    leaders.push_back(maxSoFar);
    
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            leaders.push_back(maxSoFar);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}