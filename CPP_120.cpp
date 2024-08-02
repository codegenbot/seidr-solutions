#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Add your implementation here
    return false;
}

std::vector<int> myFunction(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    assert(issame(myFunction({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    // additional test cases can be added here
    return 0;
}