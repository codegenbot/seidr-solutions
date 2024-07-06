```cpp
#include<vector>

int prod_signs(std::vector<int> arr){
    int sign_product = 1;
    long long sum = 0;

    for(int num : arr){
        if(num == 0) return -32768;
        int sign = (num > 0)? 1 : ((num < 0)? -1 : 0);
        sign_product *= sign;
        sum += abs(num);
    }

    return sign_product * sum;
}