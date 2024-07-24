#include <vector>
#include <cmath>

float max_element(std::vector<float> l){
    if(l.empty()) return 0; 
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > max)
            max = l[i];
    }
    return max;
}