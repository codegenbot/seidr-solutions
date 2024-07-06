#include <vector>
#include <cmath>
#include <initializer_list>

bool has_close_elements(std::vector<float> numbers, float threshold){
    for(int i = 0; i < numbers.size() - 1; i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    std::cout << "No close elements found.\n";
    return false;
}