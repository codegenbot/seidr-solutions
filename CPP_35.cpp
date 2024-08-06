#include <vector>
#include <cmath>
#include <cassert>

float max_element(const vector<float> &l){
    float max_val = l[0];
    for(int i = 1; i < l.size(); i++){
        if(l[i] > max_val){
            max_val = l[i];
        }
    }
    return max_val;
}

int main() {
    assert(std::abs(max_element({5.0f, 3.0f, -5.0f, 2.0f, -3.0f, 3.0f, 9.0f, 0.0f, 124.0f, 1.0f, -10.0f}) - 124.0f) < 1e-4);
    return 0;
}