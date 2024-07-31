```cpp
#include <iostream>
#include <vector>
#include <ext/new_allocator.h>
#include <cassert>

using namespace std;

bool has_close_elements(vector<float> v, float threshold) {
    for(int i = 1; i < v.size(); i++) {
        if(abs(v[i] - v[i-1]) <= threshold)
            return true;
    }
    return false;
}

assert(has_close_elements({1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f}, 0.0f) == true);
assert(has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5f) == false);