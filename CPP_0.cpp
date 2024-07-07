```cpp
#include <vector>
#include <cmath> 
#include <cassert>
#include <initializer_list>

bool has_close_elements(std::vector<double> numbers, double threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(std::abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;

}

int main() {
    double a[] = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::vector<double> b(a, a + sizeof(a) / sizeof(a[0]));
    assert (has_close_elements(b, 0.5) == false);
    return 0;