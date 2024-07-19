#include <iostream>
#include <iomanip>

bool any_int(float a, float b, float c) {
    return (a == (int)a) && (b == (int)b) && (c == (int)c);
}

int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    if(any_int(a, b, c))
        std::cout << "The numbers are integers: " << std::to_string(a) << ", " << std::to_string(b) << ", " << std::to_string(c) << "\n";
    else
        std::cout << "The numbers are not integers: " << std::to_string(a) << ", " << std::to_string(b) << ", " << std::to_string(c) << "\n";
    return 0;
}