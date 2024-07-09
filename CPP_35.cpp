```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int maxFunc() {
    std::cout << *std::max_element({std::to_string(5), std::to_string(3), std::to_string(-5), 
                                    std::to_string(2), std::to_string(-3), std::to_string(3), 
                                    std::to_string(9), std::to_string(0), std::to_string(124), 
                                    std::to_string(1), std::to_string(-10)}) << std::endl;
    return 0;
}

int main() {
    maxFunc();
    return 0;
}