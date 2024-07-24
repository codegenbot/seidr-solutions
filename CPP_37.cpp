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

std::vector<float> sortEven(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> temp;
            int j = i;
            while (j < vec.size() && j % 2 == 0) {
                temp.push_back(vec[j++]);
            }
            std::sort(temp.begin(), temp.end());
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
    
    std::vector<float> result = sortEven(vec);
    std::cout << "Sorted even elements: ";
    for (float f : result) {
        std::cout << f << " ";
    }
    std::cout << std::endl;

    return 0;
}