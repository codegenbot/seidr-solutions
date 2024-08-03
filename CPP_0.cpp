#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
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
    vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    
    assert(has_close_elements(a, 0.1) == true);
    assert(has_close_elements(a, 0.01) == true);
    assert(has_close_elements(a, 0.001) == false);

    return 0;
}