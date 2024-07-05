#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

float max_element(vector<float> l) {
    float max_val = l[0];
    for (float num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}

int main() {
    assert(abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    cout << "Test passed!" << endl;
    return 0;
}