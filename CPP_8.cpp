#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> sum_product(std::vector<int> a) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}