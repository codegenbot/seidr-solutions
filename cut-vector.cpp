#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> vec = {6984, 8312, 921, 3362, 3078};
    int idx = 2;
    
    int min_diff = abs(vec[0] - vec.back());
    
    for (int i = 1; i < vec.size()-1; ++i) {
        int diff = abs(vec[i] - vec[i+1]);
        if (diff < min_diff) {
            idx = i;
            min_diff = diff;
        }
    }

    for (int i = 0; i <= idx; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    for (int i = idx+1; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }

    return 0;
}