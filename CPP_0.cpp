#include <vector>
#include <cmath>
using namespace std;

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (fabs(numbers[i] - numbers[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}

std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
assert(has_close_elements(a, 0.5) == false);