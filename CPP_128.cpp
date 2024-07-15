#include <iostream>
#include <vector>
#include <cassert>

int prod_signs(std::vector<int> arr) {
    if(arr.empty()) return -32768;

    int product = 1;
    int sum = 0;

    for(int num : arr){
        if(num > 0) product *= 1;
        else if(num < 0) product *= -1;

        sum += std::abs(num);
    }

    return product * sum;
}

int main() {
    assert(prod_signs({-2, 3, -1, 4, 2}) == -12);
    assert(prod_signs({}) == -32768);
    
    std::cout << "All tests passed successfully." << std::endl;
    return 0;
}