```cpp
#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int total_sum = 0;
    for(float x : lst) {
        double ceil_value = std::ceil(x);
        total_sum += (static_cast<int>(ceil_value) * static_cast<int>(ceil_value));
    }
    return total_sum;
}

int main() {
    std::vector<float> input_list;
    
    int num_elements;
    std::cout << "Enter the number of elements: ";
    std::cin >> num_elements;
    
    for(int i = 0; i < num_elements; ++i) {
        float value;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> value;
        
        input_list.push_back(value);
    }
    
    int result = sum_squares(input_list);
    std::cout << "Sum of squares: " << result << std::endl;
    
    return 0;
}