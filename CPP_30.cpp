#include <iostream>
#include <vector>

bool issame(float f1, float f2) {
    return (f1 == f2);
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1, -2, 3, -4, 5};
    std::vector<float> positive_numbers = get_positive(numbers);
    for (float x : positive_numbers) {
        if (issame(x, 5.0)) {
            std::cout << "The first and the last number are same.\n";
            break;
        }
    }
    return 0;
}