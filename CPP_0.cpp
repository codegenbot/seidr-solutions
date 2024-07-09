```cpp
#include <iostream>
#include <vector>

bool has_close_elements(std::vector<std::pair<float*, float*>> numbers, float tol) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            bool closeFound = false;
            size_t k = 0;
            while (k < *numbers[i].first->size() && k < *numbers[j].second->size()) {
                float diff = std::abs((*numbers[i].first)[k] - (*numbers[j].second)[k]);
                if (diff <= tol) {
                    closeFound = true;
                    break;
                }
                k++;
            }
            if (closeFound) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    float arr1[2] = {1.0f, 2.0f};
    float arr2[2] = {1.5f, 3.0f}; 
    float* p1 = &arr1[0];
    float* p2 = &arr2[0];

    std::vector<std::pair<float*, float*>> input = {{p1, &arr1[0]}, {&arr2[0], p2}};
    
    assert(has_close_elements({{&arr1[0], &arr1[0]}}, 0.5) == false);
    return 0;
}