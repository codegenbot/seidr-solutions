```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int add(int x, int int y) {
    return x + y;
}

int main() {
    std::srand(std::time(0)); 
    int randomNum = std::rand() % 1000; 
    std::cout << "Random Number: " << std::to_string(randomNum) << std::endl;
}