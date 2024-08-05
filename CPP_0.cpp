#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sorted_numbers = numbers; // Make a copy of the input vector
    sort(sorted_numbers.begin(), sorted_numbers.end());
    
    for(int i = 1; i < sorted_numbers.size(); i++){
        if(abs(sorted_numbers[i] - sorted_numbers[i-1]) < threshold){
            return true;
        }
    }
    
    return false;
}

int main() {
    std::vector<float> a = {2.5, 1.0, 4.3, 3.7, 5.2};
    assert(has_close_elements(a, 0.5) == true);

    return 0;
}