#include <iostream>
#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implement the function logic here
    return a == b;
}

int main() {
    std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    
    std::cout << std::boolalpha;
    std::cout << issame(l, std::vector<int>{0, 2, 3, 5, 9, 123}) << std::endl; // Output result
    
    return 0;
}