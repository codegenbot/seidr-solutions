#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> arrCopy(arr);
    std::sort(arrCopy.begin(), arrCopy.end());
    if (k > arrCopy.size()) {
        return {}; 
    }
    return std::vector<int>(arrCopy.begin() + arrCopy.size() - k, arrCopy.end());
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}