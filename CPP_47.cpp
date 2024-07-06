#include <cassert>
#include <vector>

float median(std::vector<float> arr) {
    size_t n = arr.size();
    std::sort(arr.begin(), arr.end());
    if (n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2]) / 2;
    else
        return arr[n/2];
}

int main() {
    std::vector<float> arr = {8, 1, 3, 9, 9, 2, 7};
    assert(std::abs(median(arr) - 5) < 1e-4);
    return 0;
}