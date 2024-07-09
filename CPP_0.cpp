```cpp
#include <iostream>
#include <vector>

struct FloatArrayPair {
    float* first;
    float* second;
};

bool has_close_elements(std::vector<FloatArrayPair*> numbers, float tol) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            bool closeFound = false;
            size_t k = 0;
            while (k < *numbers[i]->first->size() && k < *numbers[j]->second->size()) {
                float diff = std::abs((*numbers[i]->first)[k] - (*numbers[j]->second)[k]);
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

    float* arr1_[2];
    float* arr2_[2];

    arr1_[0] = &arr1[0]; 
    arr1_[1] = &arr1[1]; 

    arr2_[0] = &arr2[0]; 
    arr2_[1] = &arr2[1]; 

    FloatArrayPair* p1_pair = new FloatArrayPair{&arr1_, &arr2_};
    std::vector<FloatArrayPair*> input = {p1_pair};

    if (!has_close_elements(input, 0.5)) {
        std::cout << "No close elements found." << std::endl;
    } else {
        std::cout << "Close elements found." << std::endl;
    }
    delete p1_pair;
    return 0;
}