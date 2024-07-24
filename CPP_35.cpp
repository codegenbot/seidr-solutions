#include <iostream>
#include <algorithm>

int main() {
    int nums[100]; // array to store numbers
    int n; // number of elements in the array
    int max_val = INT_MIN; // initialize maximum value as negative infinity
    std::string str;

    // ask for number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // read and store numbers from user
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    str = "The elements are: "; // initialize string with the header

    for (int i = 0; i < n; i++) { 
        if(i == n-1) {
            str += std::to_string(nums[i]); 
        } else {
            str += std::to_string(nums[i]);
            str += " "; 
        }
    }

    // print result
    std::cout << str << std::endl;

    return 0;
}