#include <vector>
#include <cassert>
#include <cmath>

int prod_signs(const vector<int>& arr) {
    if(arr.empty()) return -32768;
    int product = 1;
    int sum_magnitudes = 0;
    for(int num : arr){
        product *= (num == 0) ? 0 : (num > 0) ? 1 : -1;
        sum_magnitudes += std::abs(num);
    }
    return product * sum_magnitudes;
}

int main() {
    vector<int> nums = {2, -3, 0, 4, -1};
    int result = prod_signs(nums);
    return 0;
}