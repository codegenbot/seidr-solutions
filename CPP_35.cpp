#include <iostream>
#include <vector>
#include <cmath>

float max_element(std::vector<float> l){
    float max = l[0];
    for(float i:l)
        if(i > max) 
            max = i;
    return max;
}

int main() {
    assert(abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})- 124)<1e-4);
    return 0;
}