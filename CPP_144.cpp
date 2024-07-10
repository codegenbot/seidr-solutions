#include <iostream>

bool simplify(std::string fraction1, std::string fraction2) {
    return fraction1 == fraction2;
}

int main() {
    assert(simplify("1/5", "1/5") == false);  
}