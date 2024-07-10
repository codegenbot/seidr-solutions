#include <vector>
#include <iostream>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < std::min(k, arr.size()); i++) { 
        if (arr[i] < 10) { 
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr;
    int k;

    // Read input
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    
    for (int i = 0; i < k; i++) {
        int temp;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> temp;
        arr.push_back(temp);
    }

    // Calculate the sum of elements less than 10
    int result = add_elements(arr, k);

    // Print the output
    std::cout << "Sum: " << result << std::endl;

    return 0;
}