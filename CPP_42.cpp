#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (int &num : result) {
        num++;
    }
    return result;
}

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};
    
    bool result = issame(vec1, vec2);
    std::vector<int> increased = incr_list(vec1);
    
    std::cout << result << std::endl;
    for (int num : increased) {
        std::cout << num << " ";
    }
    
    return 0;
}