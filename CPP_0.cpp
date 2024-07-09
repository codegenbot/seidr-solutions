```cpp
#include <iostream>
#include <vector>

bool has_close_elements(float numbers[], int size, float threshold) {
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
    if(has_close_elements(numbers, sizeof(numbers)/sizeof(numbers[0]), 0.5f))
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}