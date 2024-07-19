#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    std::sort(arr.begin(), arr.end());

    assert (issame(arr, {2, 4, 8, 16, 32}));

    return 0;
}