#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> res(k);
    std::partial_sort(arr.begin(), arr.end() - k + 1, arr.end());
    for (int i = 0; i < k; i++) {
        res[i] = arr[arr.size() - k + i];
    }
    return res;
}

int main() {
    assert(std::issame(maximum({1, 2, 3, -23, 243, -400, 0}, 4), {0, -23, -400, 2}));
    return 0;
}