#include <vector>
#include <cmath>
#include <cassert>

float findMax(const std::vector<float>& l){
    float maxVal = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > maxVal){
            maxVal = l[i];
        }
    }
    return maxVal;
}

int main() {
    assert (std::abs(findMax({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}