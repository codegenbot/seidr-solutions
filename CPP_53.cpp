#include <iostream>
#include <cassert>
#include <string>

int add(int x, int y) {
    return x + y;
    assert(x + y == add(x, y)); 
}

int main() {
    int x, y;
    std::cin >> x >> y;

    // Convert the integers to strings before inserting
    std::string strX = std::to_string(x);
    std::string strY = std::to_string(y);

    return 0;
}