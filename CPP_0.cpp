#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(float numbers[], float threshold){
    std::vector<float> vec(numbers, numbers + sizeof(numbers) / sizeof(numbers[0]));
    for(int i = 0; i < vec.size(); i++){
        for(int j = i + 1; j < vec.size(); j++){
            if(abs(vec[i] - vec[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    float numbers[] = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    bool result = has_close_elements(numbers, 0.5);
    std::cout << "The result is: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}