#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result(arr.begin(), arr.begin() + k);
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 7), {0}));
}