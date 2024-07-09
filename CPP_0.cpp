#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(float numbers[], int size, float threshold){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    float numbers[] = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    bool result = has_close_elements(numbers, size, 0.5);
    std::cout << "The result is: " << (result ? "true" : "false") << std::endl;
    
    return 0;
}