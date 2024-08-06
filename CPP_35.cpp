#include <vector>
#include <cmath>
#include <initializer_list>

float max_element(const std::initializer_list<float> &l){
    float max_val = *l.begin();
    for(auto it = l.begin() + 1; it != l.end(); ++it){
        if(*it > max_val){
            max_val = *it;
        }
    }
    return max_val;
}

int main() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}