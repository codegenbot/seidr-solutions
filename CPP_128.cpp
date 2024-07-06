```cpp
#include <vector>

int prod_signs(std::vector<int> arr){
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for(int num : arr){
        if(num == 0) return 0; // If zero, product of signs will be zero

        int sign = (num > 0)? 1 : ((num < 0)? -1 : 0);
        sign_product *= sign;
        sum_of_magnitudes += abs(num);
    }

    if(arr.empty()) return -32768;

    return sum_of_magnitudes * sign_product;
}