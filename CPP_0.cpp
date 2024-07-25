```cpp
#include <iostream>
#include <vector>

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
    float arr[] = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    std::vector<float> a(arr, arr + sizeof(arr) / sizeof(arr[0]));
    if (!has_close_elements(a, 0.5))
        std::cout << "The given array does not have two elements within the given threshold." << std::endl;
    else
        std::cout << "The given array has at least two elements that are within the given threshold." << std::endl;
}