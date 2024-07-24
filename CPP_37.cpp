```cpp
#include <iostream>
#include <algorithm>
#include <vector>

bool checkVectors(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> temp;
            int j = i;
            while (j < vec.size() && j % 2 == 0) {
                temp.push_back(vec[j++]);
            }
            // Sort the temporary vector.
            std::sort(temp.begin(), temp.end(), [](float a, float b){return a < b;});
            // Replace even elements in result with the sorted ones.
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
                j++;
            }
            while (j < vec.size()) {
                result.push_back(vec[j++]);
            }
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}

int main() {
    std::vector<float> vec = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::cout << "Original vector: ";
    for (float f : vec) {
        std::cout << f << " ";
    }
    std::cout << std::endl;
    
    std::vector<float> result = sort_even(vec);
    std::cout << "Sorted even elements: ";
    for (float f : result) {
        std::cout << f << " ";
    }
    std::cout << std::endl;

    return 0;
}