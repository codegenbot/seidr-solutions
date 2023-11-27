#include <vector>
#include <cassert>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::fabs(numbers[i] - numbers[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    assert(has_close_elements(std::vector<float>{1.0, 2.0, 3.9, 4.0, 5.0, 2.2}, 0.5) == true);
    assert(has_close_elements(std::vector<float>{1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    
    return 0;
}