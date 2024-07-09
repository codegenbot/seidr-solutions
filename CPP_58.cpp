#include <iostream>
#include <vector>

// Function to check if two vectors are same
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Function to find the common elements of two lists
std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    // Convert the vectors into sets for efficient operations
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    // Find the common elements by performing set intersection
    std::set<int> result = s1; // Intersection of two sets does not work in standard c++ 
    for(auto i : s2) {
        if(s1.find(i) != s1.end()) 
            result.insert(i);
    }

    // Convert the resulting set back into a vector and return it
    std::vector<int> final_result(result.begin(), result.end());
    return final_result;
}

int main() {
    std::vector<int> l1 = {4, 3, 2, 8};
    std::vector<int> l2 = {4, 5, 6};

    std::vector<int> result = common(l1, l2);
    
    for (auto i : result) {
        std::cout << i << " ";
    }
    
    return 0;
}