```cpp
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
    float float_list[] = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    std::vector<float> a(float_list, float_list + sizeof(float_list)/sizeof(float_list[0]));
    assert(has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5) == false);
    return 0;
}