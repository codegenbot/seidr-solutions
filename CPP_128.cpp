#include <vector>
#include <algorithm>

int prod_signs(std::vector<int> arr){
    if (arr.empty()) {
        return -32768; // empty array
    }

    int sign_product = 1;
    long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // contains zero
        }
        int sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sum_of_magnitudes += std::abs(num); 
        sign_product *= sign;
    }

    return sum_of_magnitudes * sign_product;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}