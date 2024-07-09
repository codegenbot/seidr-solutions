#include <vector>
#include <iostream>

bool issame(vector<float> a, vector<float> b) {
    // Your implementation here
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1, -2, 3, -4, 5};
    auto pos_numbers = get_positive(numbers);
    
    for (float x : pos_numbers) {
        if (!issame({x}, {pos_numbers[0]})) {
            std::cout << "Error: Element " << x << " is not the same as the first element.\n";
        } else {
            std::cout << "Element " << x << " is the same as the first element.\n";
        }
    }
    
    return 0;
}