#include <vector>
#include <cmath>
#include <initializer_list>

float max_element(std::initializer_list<float> l){
    float max = *(l.begin());
    for (float num : l) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}

int main2() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}