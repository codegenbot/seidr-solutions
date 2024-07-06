```cpp
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
    std::vector<float> a={1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    if(has_close_elements(a, 1.0f)){
        std::cout << "The array has at least two elements with a difference of 1 or less." << std::endl;
    }else{
        std::cout << "The array does not have at least two elements with a difference of 1 or less." << std::endl;
    }
    return 0;
}