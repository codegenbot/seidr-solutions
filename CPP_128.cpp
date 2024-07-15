#include <iostream>
#include <vector>
#include <cassert>

int prod_signs(vector<int> arr) {
    if(arr.empty()) return -32768;

    int product = 1;
    int sum = 0;

    for(int num : arr){
        if(num > 0) product *= 1;
        else if(num < 0) product *= -1;

        sum += abs(num);
    }

    return product * sum;
}

int main() {
    std::vector<int> test_arr = {1, -2, 3, -4, 5};
    assert(prod_signs(test_arr) == 27);

    test_arr = {10, 20, 30};
    assert(prod_signs(test_arr) == 60);

    test_arr = {-1, -2, -3, -4};
    assert(prod_signs(test_arr) == -10);

    test_arr = {};
    assert(prod_signs(test_arr) == -32768);

    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}