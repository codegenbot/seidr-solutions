#include <iostream>
#include <algorithm>

int main() {
    int nums[100]; 
    int n; 
    int max_val = INT_MIN; 
    std::string str;

    // ask for number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // read and store numbers from user
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    // print all elements as a string
    str = "The elements are: ";
    for (int i = 0; i < n; i++) {
        str += std::to_string(nums[i]);
        if(i < n-1) {
            str +=' ';
        }
    }

    // print result
    std::cout << str << std::endl;

    return 0;
}