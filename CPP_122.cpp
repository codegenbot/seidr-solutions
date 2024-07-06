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
    int k;

    // input
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    
    vec.resize(k);

    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        vec[i] = num;
    }

    int result = add_elements(vec, k);
    
    // output
    std::cout << "The sum of the elements is: " << result << std::endl;

    return 0;
}