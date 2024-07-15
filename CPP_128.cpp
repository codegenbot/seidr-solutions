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

        sum += abs(num);
    }

    return product * sum;
}

int main() {
    std::vector<int> test1 = {2, -3, 4, -5, 6};
    assert(prod_signs(test1) == 10);
    
    std::vector<int> test2 = {1, 2, 3, 4, 5};
    assert(prod_signs(test2) == 15);

    std::vector<int> test3 = {-1, -2, -3, -4, -5};
    assert(prod_signs(test3) == 15);
    
    std::vector<int> test4 = {};
    assert(prod_signs(test4) == -32768);

    std::cout << "All tests passed!" << std::endl;

    return 0;
}