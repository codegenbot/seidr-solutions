#include <iostream>
#include <string>

std::string add() {
    int x, y;
    std::cin >> x >> y;
    return std::to_string(x + y);
}

int main() {
    std::cout << add() << std::endl; 
    return 0;
}