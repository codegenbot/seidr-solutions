#include <vector>
#include <algorithm>
#include <cmath>

const float EPS = 1e-6;

void rescale_to_unit(std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    for (float &num : numbers) {
        num = (num - min_num) / (max_num - min_num + EPS);
    }
}

bool issame(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    if(vec1.size() != vec2.size())
        return false;
    
    for(size_t i = 0; i < vec1.size(); ++i) {
        if(std::abs(vec1[i] - vec2[i]) > EPS)
            return false;
    }
    
    return true;
}