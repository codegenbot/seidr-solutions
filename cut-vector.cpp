#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {2, 5, 7, 3, 8, 4, 6};
    
    int cutIndex = 0;
    int n = vec.size();
    std::cout << cutIndex + 1 << std::endl << n - cutIndex << std::endl;
    
    return 0;
}