#include <vector>
#include <cmath>

float max_element(const std::vector<float>& l){
    float max_num = l[0];
    for(int i = 1; i < l.size(); i++){
        if(l[i] > max_num){
            max_num = l[i];
        }
    }
    return max_num;
}

#include <cassert>

int main(){
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
}