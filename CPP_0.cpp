#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool has_close_elements(vector<float> a, float tol) {
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (abs(a[i] - a[j]) <= tol) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<float> numbers(7, 0.0f);
    numbers[0] = 1.0f; numbers[1] = 2.0f; numbers[2] = 3.9f; numbers[3] = 4.0f; numbers[4] = 5.0f; numbers[5] = 2.2f; numbers[6] = 0.0f;
    assert(has_close_elements(numbers, 0.5) == false);

    vector<float> numbers2(5, 0.0f);
    numbers2[0] = 1.1f; numbers2[1] = 2.2f; numbers2[2] = 3.1f; numbers2[3] = 4.1f; numbers2[4] = 5.1f;
    assert(has_close_elements(numbers2, 0.5) == false);
}