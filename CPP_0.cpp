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
    float* arr1 = new float[2];
    float* arr2 = new float[2];

    arr1[0] = 1.0f;
    arr1[1] = 2.0f;

    arr2[0] = 1.5f;
    arr2[1] = 3.0f; // Different elements

    std::vector<std::pair<float*, float*>> input = {{arr1, arr2}};
    
    assert(has_close_elements({{arr1, arr1}, {arr2, arr2}}, 0.5) == false);
    delete[] arr1;
    delete[] arr2;
    return 0;
}