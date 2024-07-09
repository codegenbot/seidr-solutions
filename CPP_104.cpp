#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> x = {1, 2, 3};
    std::vector<int> y = {1, 2, 4};
    if (issame(x, y)) {
        std::cout << "Vectors are same." << std::endl;
    } else {
        std::cout << "Vectors are not same." << std::endl;
    }
    
    return 0;
}