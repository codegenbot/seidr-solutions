```cpp
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool has_close_elements(vector<float> a, float threshold) {
    for(int i = 1; i < a.size(); i++) {
        if(abs(a[i] - a[i-1]) <= threshold)
            return true;
    }
    return false;
}

int main() {
    vector<float> a(5);
    a[0] = 1.1f; a[1] = 2.2f; a[2] = 3.1f; a[3] = 4.1f; a[4] = 5.1f;
    float threshold = 0.5f;
    assert(has_close_elements(a, threshold) == true);
}