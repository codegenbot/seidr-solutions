```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    std::srand(std::time(0)); 
    int x = std::rand() % 1000; 
    std::cout << "Random Number: " << x << std::endl;
}