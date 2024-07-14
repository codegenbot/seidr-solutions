```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0) return result;
    
    for (int i = n - 1; i >= 0; i--) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}

int main() {
    leaders({16, 17, 4, 3, 5, 2, 8, 9, 1, 3});
    return 0;
}