#include <iostream>
#include <vector>
#include <cmath>

float findMaxElement(const std::vector<float>& l){
    float maxVal = l[0];
    for(float num : l){
        if(num > maxVal){
            maxVal = num;
        }
    }
    return maxVal;
}

int main(){
    assert(std::abs(findMaxElement({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}