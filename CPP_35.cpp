#include <iostream>
#include <vector>
#include <cmath>

float max_element(std::vector<float> l){
    float max = std::abs(l[0]);
    for(int i=1; i<l.size(); i++){
        if(std::abs(l[i]) > max)
            max = std::abs(l[i]);
    }
    return max;
}