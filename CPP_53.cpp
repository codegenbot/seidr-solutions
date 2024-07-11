#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int add(int x, int y) {
    return x + y;
}

int main() {
    std::srand(std::time(0)); 
    int x = std::rand() % 1000; 
    #include <string>
    std::cout << "Random Number: " << std::to_string(x) << std::endl;
}