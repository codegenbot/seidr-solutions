#include <vector>
#include <cmath>

float max_element(const vector<float>& l){
    float max_val = l[0];
    for (float num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}