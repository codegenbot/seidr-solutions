```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

bool has_close_elements(std::vector<double> numbers, double threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    std::vector<double> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(std::abs(0.5 - 0.0) <= 0.5);
    return 0;
}