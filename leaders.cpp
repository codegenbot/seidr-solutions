```c++
#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxSoFar = arr[n-1];
    result.push_back(maxSoFar);
    
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            result.push_back(maxSoFar);
        }
    }
    
    return vector<int>(result.rbegin(), result.rend());
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5, 9};
    vector<int> result = leaders(arr);
    for(int num : result) {
        cout << num << " ";
    }
    return 0;
}