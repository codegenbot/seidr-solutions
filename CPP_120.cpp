#include <algorithm>
#include <vector>

bool isSame(int a, int b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    while (k--) {
        int max_val = *std::max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        arr.erase(std::remove(arr.begin(), arr.end(), max_val), arr.end());
    }
    return result;
}

int main() {
    assert(isSame(maximum({1, 2, 3, -23, 243, -400, 0}, 4) , {}));
    return 0;
}