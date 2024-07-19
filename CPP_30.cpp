#include <vector> // include necessary header
#include <cassert> // for using assert

bool issame(std::vector<float> a, std::vector<float> b); // function signature

std::vector<float> get_positive(std::vector<float> l) { // define get_positive function
    std::vector<float> positive_numbers;
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}

bool issame(std::vector<float> a, std::vector<float> b) { // definition of issame function
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {})); // corrected assert call
    return 0;
}