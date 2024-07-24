#include <vector>
#include <cmath>
#include <cassert>

float max_element(std::vector<float> l){
    float max_val = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }
    return max_val;
}

int main(){
    assert(std::abs(max_element({5.0, 3.0, -5.0, 2.0, -3.0, 3.0, 9.0, 0.0, 124.0, 1.0, -10.0}) - 124.0) < 1e-4);
    return 0;
}