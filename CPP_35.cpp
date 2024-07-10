#include <vector>
#include <cmath>
#include <cassert>
#include <initializer_list>

float max_element(std::initializer_list<float> l){
    assert(!l.empty());
    float max_val = *l.begin();
    for (float val : l) {
        if (val > max_val) {
            max_val = val;
        }
    }
    return max_val;
}