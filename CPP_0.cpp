#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for(int i = 1; i < numbers.size(); i++){
        if(abs(numbers[i] - numbers[i-1]) < threshold){
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.2, 2.5, 3.8, 4.1, 5.6};
    assert(has_close_elements(a, 0.5) == false);

    return 0;
}