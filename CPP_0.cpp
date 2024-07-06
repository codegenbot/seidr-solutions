```cpp
#include <vector>
#include <cmath> // For abs() function

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
    std::vector<double> a(6); // initialize with size 6
    a[0] = 1.0; a[1] = 2.0; a[2] = 3.9; a[3] = 4.0; a[4] = 5.0; a[5] = 2.2;
    // Call your function
    assert (has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
}