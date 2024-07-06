```
#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> vec;
    int num;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> num;
    
    vec.resize(num);
    
    std::cout << "Enter the elements: ";
    
    for (int i = 0; i < num; i++) {
        std::cin >> vec[i];
    }
    
    int result = add_elements(vec, num);
    
    std::cout << "The sum of the small numbers is: " << result << std::endl;
    
    return 0;
}