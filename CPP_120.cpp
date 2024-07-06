#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

namespace std {
std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        int max_val = *std::max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        auto it = std::remove(arr.begin(), arr.end(), max_val);
        arr.erase(it, arr.end());
    }
    return result;
}
}

int main() {
    int arr[] = {1, 2, 3, -23, 243, -400, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::vector<int> array (arr, arr+n);
    assert(issame(maximum(array, 4), ({0, 1, 2, 3})));
    return 0;
}