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
    std::vector<int> nums;
    int threshold;
    
    // Read input from the user
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    
    std::cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    
    std::cout << "Enter the threshold value: ";
    std::cin >> threshold;
    
    // Call the function and print the result
    bool result = below_threshold(nums, threshold);
    std::cout << "The list is " << (result ? "below" : "above or equal to") << " the threshold." << std::endl;

    return 0;
}