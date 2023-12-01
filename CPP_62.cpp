#include <iostream>
#include <vector>

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    // implementation here
    // return true if vectors a and b are the same
    // otherwise, return false
}

int main() {
    // test cases
    std::vector<float> result = derivative({1.0});

    // print the result
    for (float val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}