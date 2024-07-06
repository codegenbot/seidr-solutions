#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for(int i = 0; i < numbers.size(); ++i) {
        for(int j = i + 1; j < numbers.size(); ++j) {
            if(std::abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    float threshold = 0.5f; 
    if(threshold > 0) {
        if(has_close_elements(a, threshold)) {
            std::cout << "There are close elements in the array with a difference less than or equal to " << threshold << "." << std::endl;
        } else {
            std::cout << "There are no close elements in the array with a difference less than or equal to " << threshold << "." << std::endl;
        }
    } else {
        std::cout << "Please enter a positive number for the threshold." << std::endl;
    }
    return 0;
}