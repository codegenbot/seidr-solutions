#include <vector>
#include <cmath>

float max_element(vector<float> l){
    float max = abs(l[0]);
    for(int i=1; i<l.size(); i++){
        if(abs(l[i]) > max)
            max = abs(l[i]);
    }
    return max;
}