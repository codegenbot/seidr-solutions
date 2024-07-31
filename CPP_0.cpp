```cpp
#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<double> numbers, double threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    std::vector<double> a; 
    a.push_back(1.0);
    a.push_back(2.0);
    a.push_back(3.9);
    a.push_back(4.0);
    a.push_back(5.0);
    a.push_back(2.2); 
    if (!has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5)) {
        std::cout << "No close elements found." << std::endl;
    } else {
        std::cout << "Close elements found." << std::endl;
    }
    return 0;
}