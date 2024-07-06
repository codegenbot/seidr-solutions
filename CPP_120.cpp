#include <iostream>
#include <vector>
#include <algorithm>

// Function to check if two vectors are equal
bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

// Function to find the maximum k elements in the vector
std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

// Main function
int main() {
    // Test the functions
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}));
    
    std::cout << "Code works fine!" << std::endl;

    return 0;