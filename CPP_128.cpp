#include <vector>
#include <iostream>

int prod_signs(std::vector<int> arr) {
    if(arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    for(int num : arr) {
        if(num < 0) sign *= -1;
        else if(num > 0) continue;
        sum += abs(num);
    }
    return sum * sign;
}

int main() {
    std::cout << prod_signs({-1, 1, 1, 0}) << std::endl;
    return 0;
}