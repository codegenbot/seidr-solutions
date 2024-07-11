#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sorted_a = a;
    std::vector<int> sorted_b = b;
    std::sort(sorted_a.begin(), sorted_a.end());
    std::sort(sorted_b.begin(), sorted_b.end());
    return sorted_a == sorted_b;
}

int main() {
    std::vector<int> a = {4, 3, 2, 8};
    std::vector<int> b;
    
    bool result = issame(a, b);
    
    std::cout << std::boolalpha << result << std::endl;
    
    return 0;
}