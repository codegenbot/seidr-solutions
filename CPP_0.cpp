#include <vector>
#include <cmath>

int has_close_elements(std::vector<float> numbers, float threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return 1;
        }
    }
    return 0;
}