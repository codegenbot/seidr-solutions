#include <vector>
#include <cmath>

float max_element(std::vector<float> l){
    float maximum = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > maximum)
            maximum = l[i];
    }
    return maximum;
}