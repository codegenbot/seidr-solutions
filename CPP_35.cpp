#include <vector>
#include <cmath>

float max_element(vector<float> l){
    float maximum = l[0];
    for(int i=1; i<l.size(); i++){
        if(abs(l[i]) > abs(maximum))
            maximum = l[i];
    }
    return maximum;
}