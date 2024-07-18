#include <vector>
#include <algorithm>

float max_element(const vector<float>& l){
    return *std::max_element(l.begin(), l.end());
}

int main(){
    std::vector<float> nums( {1.2, 3.4, 5.6, 7.8, 9.0} );
    float result = max_element(nums);
    return 0;
}