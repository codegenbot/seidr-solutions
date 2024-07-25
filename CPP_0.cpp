```c++
#include <vector>
#include <cmath>
#include <initializer_list>

bool has_close_elements(std::vector<float> numbers, float threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(std::abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a={1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert (has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5) == false);
}