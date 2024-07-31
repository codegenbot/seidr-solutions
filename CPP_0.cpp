```cpp
#include <iostream>
#include <vector>

using namespace std;

bool has_close_elements(vector<float> v, float threshold) {
    for(int i = 1; i < v.size(); i++) {
        if(abs(v[i] - v[i-1]) <= threshold)
            return true;
    }
    return false;
}