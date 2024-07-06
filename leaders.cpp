#include <iostream>
#include <vector>

int main() {
    // Define the vector with positive integers
    std::vector<int> v{10, 9, 23, 56, 77, 100};
    
    // Initialize result vector
    std::vector<int> result;
    
    // Iterate over the vector in reverse order
    for (auto i = v.rbegin(); i != v.rend(); ++i) {
        bool isLeader = true;
        
        // Check if current element is greater than or equal to all elements to its right
        for (auto j = i + 1; j != v.rend(); ++j) {
            if (*i < *j) {
                isLeader = false;
                break;
            }
        }
        
        // If current element is a leader, add it to the result vector
        if (isLeader) {
            result.push_back(*i);
        }
    }
    
    // Print the result vector
    for (auto i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}