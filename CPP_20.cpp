#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> find_closest_elements(std::vector<float> numbers){
    float min_diff = std::INFINITY;
    float num1, num2;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = std::abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }
    
    std::vector<float> result;
    result.push_back(num1);
    result.push_back(num2);
    
    return result;
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == std::vector<float>{2.2, 3.1});
    return 0;
}