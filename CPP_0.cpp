#include <vector>
using namespace std;

int has_close_elements(const vector<float>& numbers, float threshold) {
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (fabs(numbers[i] - numbers[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    has_close_elements(numbers, 0.5);
    return 0;
}