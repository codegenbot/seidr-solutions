```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 1) return {arr[0]};
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr[i + 1]) {
            result.push_back(arr[i]);
        }
    }
    
    result.push_back(arr[n-1]);
    
    return result;
}

int main() {
    vector<int> leaders(vector<int>{1, 3, 4, 2});
    return 0;
}