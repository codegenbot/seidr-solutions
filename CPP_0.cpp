#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a=(float)1.0, (float)2.0, (float)3.9, (float)4.0, (float)5.0, (float)2.2);
    assert(has_close_elements((float)1.1, (float)2.2, (float)3.1, (float)4.1, (float)5.1), 0.5) == false);
}