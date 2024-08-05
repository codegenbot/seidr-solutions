#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

bool has_close_elements(const std::vector<double>& numbers, double threshold) {
    sort(numbers.begin(), numbers.end());
    for(int i = 1; i < numbers.size(); i++){
        if(abs(numbers[i] - numbers[i-1]) < threshold){
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<double> a = {2.5, 1.0, 4.3, 3.7, 5.2};
    assert(has_close_elements(a, 0.5) == true);

    return 0;
}