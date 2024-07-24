#include <iostream>
#include <vector>
#include <cmath>

float max_element(std::vector<float> l){
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > max)
            max = l[i];
    }
    return max;
}

int main() {
    std::vector<float> v = {10.5, 20.2, -3.14, 4.56};
    float result = max_element(v);
    std::cout << "Max element is: " << abs(result) << std::endl;
    return 0;
}