#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    int idx = 2; // Replace 2 with the actual index value

    for (int i = 0; i <= idx; ++i) {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = idx+1; i < vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}