#include <cassert>
#include <vector>
#include <cmath>

float median(std::vector<float> arr) {
    int n = arr.size();
    std::sort(arr.begin(), arr.end());
    
    if (n % 2 == 1) {
        return arr[n / 2];
    } else {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
}

int main() {
    std::vector<float> arr = {8.0, 1.0, 3.0, 9.0, 9.0, 2.0, 7.0};
    assert(abs(median(arr) - 5.0) < 1e-4);
    return 0;
}