#include <vector>
#include <cassert>
#include <cmath>

float max_element(std::vector<float> l){
    float maximum = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > maximum){
            maximum = l[i];
        }
    }
    return maximum;
}

int main(){
    assert (std::abs(max_element(std::vector<float>{5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}