#include <vector>
#include <cmath>

float max_element(std::vector<float> l){
    float result = l[0];
    for(float x : l) {
        if(x > result)
            result = x;
    }
    return result;
}

int main() {
    // your test case code here
}