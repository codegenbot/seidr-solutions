#include <ctime>
#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(static_cast<unsigned>(time(0))); 
    int x = rand() % 1000; 
    std::cout << "Random Number: " << x << std::endl;
}