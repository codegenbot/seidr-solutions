```cpp
#include <vector>
#include <algorithm>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> myVector, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        int max_val = *std::max_element(myVector.begin(), myVector.end());
        result.push_back(max_val);
        auto it = std::remove(myVector.begin(), myVector.end(), max_val);
        myVector.erase(it, myVector.end());
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, -23, 243, -400, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::vector<int> array (arr, arr+n);
    assert(same(maximum(array, 4), {0, 1, 2, 3}));
    return 0;
}