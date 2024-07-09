#include <vector>
#include <iostream>

int basement(std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;
}

int main() {
    std::vector<int> v = {1, 2, -3, 4, -5};
    int result = basement(v);
    if(result != -1) {
        std::cout << "Basement found at index: " << result << std::endl;
    } else {
        std::cout << "No basement found." << std::endl;
    }
    return 0;
}