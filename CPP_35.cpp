#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

float max_element(vector<float> l) {
    if (l.empty()) return NAN;
    float max_val = l[0];
    for (float num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}

int main() {
    assert(abs(max_element({5.0f, 3.0f, -5.0f, 2.0f, -3.0f, 3.0f, 9.0f, 0.0f, 124.0f, 1.0f, -10.0f}) - 124.0f) < 1e-4);
    cout << "Assertion passed!" << endl;
    return 0;
}