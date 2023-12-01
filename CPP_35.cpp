#include <vector>
#include <cmath>
#include <cassert>
#include <algorithm>
#include <iostream>

float find_max_element(const std::vector<float>& l){
    auto max_it = std::max_element(l.begin(), l.end());
    float max = *max_it;
    return max;
}

int main(){
    float result = find_max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    assert(result == 124);

    std::cout << "Max element: " << result << std::endl;
    
    return 0;
}