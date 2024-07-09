#include <iostream>
#include <vector>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<float> vec = {1.0, -2.5, 3.0, -4.0};
    vector<float> positive = get_positive(vec);
    
    for (float i : positive) {
        std::cout << i << " ";
    }
    return 0;
}