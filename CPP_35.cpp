#include <vector>
#include <cmath>
#include <cassert>

float max_element(const std::vector<int>& l){
    float max_val = l[0];
    for(int i = 1; i < l.size(); i++){
        if(l[i] > max_val){
            max_val = l[i];
        }
    }
    return max_val;
}