#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    std::vector<int> result = {INT_MIN, INT_MAX};
    
    for(int num : lst) {
        if(num < 0 && num > result[0]) {
            result[0] = num;
        } else if(num > 0 && num < result[1]) {
            result[1] = num;
        }
    }
    
    return result;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> input = {-6, -4, -4, -3, -100, 1};
    std::vector<int> expected_output = {-100, -3};
    
    assert(is_same(largest_smallest_integers(input), expected_output));
    
    return 0;
}