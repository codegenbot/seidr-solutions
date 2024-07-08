#include <iostream>
#include <vector>
#include <cmath>

float max_element(std::vector<float> l){
    float max = l[0];
    for(float i:l)
        if(i > max) 
            max = i;
    return max;
}

int main() {
    // Your code here...
}