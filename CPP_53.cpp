```cpp
#include <iostream>
#include <string>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // Convert integers to strings
    std::string s1 = std::to_string(a);
    std::string s2 = std::to_string(b);

    std::cout << "Their sum is: " << add(a, b) << std::endl; 
    return 0;
}