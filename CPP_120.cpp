#include <vector>
#include <algorithm>

bool issame() {
    int main() {
        assert(maximum({1, 2, 3, -23, 243, -400, 0}, 7) == vector<int>({0, 1, 2})); 
    }
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}
```