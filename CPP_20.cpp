#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> find_closest_elements(std::vector<float> numbers);

bool issame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
}

std::vector<float> find_closest_elements(std::vector<float> numbers){
    float min_diff = INFINITY;
    float num1, num2;

    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }

    return {num1, num2};
}