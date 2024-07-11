```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    std::srand(std::time(0)); 
    int randomNum = std::rand() % 1000; 
    std::cout << "Random Number: " << randomNum << std::endl;
}