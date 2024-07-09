#include <vector>
#include <cmath>

int has_close_elements(vector numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(*(numbers.begin() + i) - *(numbers.begin() + j)) <= threshold)
                return 1;
        }
    }
    return 0;
}

int main() {
    vector a={1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert (has_close_elements(a, 0.5) == 0);
}