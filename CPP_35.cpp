#include <vector>
#include <cmath>

float max_element(const vector<float>& l){
    float max = l[0];
    for(int i = 1; i < l.size(); i++){
        if(abs(l[i]) > max){
            max = l[i];
        }
    }
    return max;
}