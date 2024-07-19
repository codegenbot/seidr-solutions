#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for(int i = 0; i < numbers.size() - 1; i++) {
        for(int j = i + 1; j < numbers.size(); j++) {
            if(abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::vector<float> b={1.1, 2.2, 3.1, 4.1, 5.1};
    std::cout << (has_close_elements(a, 0.1) ? "True" : "False") << std::endl;
    std::cout << (has_close_elements(b, 0.5) ? "True" : "False") << std::endl;
    return 0;
}