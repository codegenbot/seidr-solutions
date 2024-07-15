#include <iostream>
#include <cassert>

int greatest_common_divisor(int a, int b) {
    if (b == 0)
        return a;
    return greatest_common_divisor(b, a % b);
}

int main() {
    assert(greatest_common_divisor(144, 60) == 12);
    
    // Add more test cases here
    
    std::cout << "All test cases passed successfully." << std::endl;
    
    return 0;
}