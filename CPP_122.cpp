```cpp
#include <string>
#include <vector> 
#include <initializer_list>

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
    std::vector<int> arr;
    int k;
    
    // Read input from user
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        arr.push_back(num);
    }
    
    // Calculate sum using add_elements function
    int result = add_elements(arr, k);
    
    // Print the result
    std::cout << "Sum of elements: " << result << std::endl;
    
    return 0;
}