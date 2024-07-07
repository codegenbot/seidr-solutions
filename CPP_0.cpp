``` 
#include <vector>
#include <cmath> 
#include <cassert>

bool has_close_elements(std::vector<double> numbers, double threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(std::abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;

}

int main {
    double a[] = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::vector<double> b;
    for (double num : a) {
        b.push_back(num);
    }
    assert (has_close_elements(b, 0.5) == false);
}