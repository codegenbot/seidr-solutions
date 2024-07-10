#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[0]) {
            return false;
        }
    }
    return true;
}

std::vector<int> get_max_k_elements(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end());
    arr.resize(k);
    return arr;
}

int main() {
    assert(issame(get_max_k_elements({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    
    return 0;
}