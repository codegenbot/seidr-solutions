#include <vector>
#include <cmath>

float max_element(vector<float> l){
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(std::abs(l[i] - max) > 1e-9)
            max = l[i];
    }
    return max;
}