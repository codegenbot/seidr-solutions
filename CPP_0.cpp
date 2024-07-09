```cpp
#include <iostream>
#include <vector>
#include <initializer_list>

bool has_close_elements(std::vector<std::vector<float>> numbers, float tol) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            bool closeFound = false;
            for (size_t k = 0; k < numbers[i].size(); k++) {
                if (k < numbers[j].size()) {
                    float diff = std::abs(numbers[i][k] - numbers[j][k]);
                    if (diff <= tol) {
                        closeFound = true;
                        break;
                    }
                } else {
                    closeFound = true;
                    break;
                }
            }
            if (closeFound) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<std::vector<float>> numbers;
    numbers.reserve(14); 
    for (int i = 0; i < 7; i++) {
        std::vector<float> row;
        for (int j = 0; j < 2; j++) {
            if (i == 0) row.push_back((float)i);
            else if (i == 1) row.push_back((float)(i-1));
            else if (i == 2) row.push_back(2.0f);
            else if (i == 3) row.push_back(4.0f);
            else if (i == 4) row.push_back(5.0f);
            else if (i == 5) row.push_back(2.2f);
            else row.push_back(0.0f);
            numbers.push_back(row);
        }
    }
    assert(has_close_elements(numbers, 0.5) == false);
    
    std::vector<std::vector<float>> numbers2 = {{1.1f},{1.1f}, {2.2f},{2.2f}, {3.1f},{3.1f}, {4.1f},{4.1f}, {5.1f},{5.1f}};
    assert(has_close_elements(numbers2, 0.5) == false);
}