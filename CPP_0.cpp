#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <iostream>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for(int i = 1; i < numbers.size(); i++){
        if(std::abs(numbers[i] - numbers[i-1]) < threshold){
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.2f, 2.5f, 3.8f, 4.1f, 5.6f};
    assert(has_close_elements(a, 0.5f) == false);

    return 0;
}