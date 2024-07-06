#include <cassert>

bool any_int(float a, float b, float c) {
    if (a == int(a) && b == int(b) && c == int(c)) {
        return (a == b + c || a == c + b || b == a + c || b == c + a || c == a + b || c == b + a);
    }
    return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    assert(any_int(1.0f, 2.0f, 3.0f) == true);
    
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (any_int(a, b, c)) {
        std::cout << "These numbers can be the sides of an integer triangle." << std::endl;
    } else {
        std::cout << "These numbers cannot be the sides of an integer triangle." << std::endl;
    }
    
    return 0;
}