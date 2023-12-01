#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers;
    int threshold;
    
    // Read input from user
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }
    std::cin >> threshold;
    
    // Call the function and print the result
    bool result = below_threshold(numbers, threshold);
    std::cout << std::boolalpha << result << std::endl;
    
    return 0;
}