#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold){
    for(int i = 0; i < numbers.size() - 1; i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(std::abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main(){
    std::vector<float> a={1e-9 + 1.0, 1e-9 + 2.0, 1e-9 + 3.9, 1e-9 + 4.0, 1e-9 + 5.0, 1e-9 + 2.2};
    assert(has_close_elements({1e-9 + 1.1, 1e-9 + 2.2, 1e-9 + 3.1, 1e-9 + 4.1, 1e-9 + 5.1}, 0.5) == false);
    return 0;
}