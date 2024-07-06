#include <cassert>
#include <vector>
#include <algorithm>
#include <cmath>

float median(std::vector<float> arr) {
    std::sort(arr.begin(), arr.end());
    int n = arr.size();
    if(n%2==0)
        return (arr[n/2 - 1] + arr[n/2]) / 2;
    else
        return arr[n/2];
}

int main() {
    std::vector<float> arr = {8.0, 1.0, 3.0, 9.0, 9.0, 2.0, 7.0};
    assert(abs(median(arr) - 5.0) < 1e-4);
    return 0;
}