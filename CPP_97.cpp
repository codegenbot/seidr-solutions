#include <iostream>

int multiply(int a, int b) {
    return (a % 10) * (b % 10);
}

int main(int argc, char** argv) {
    int a, b;
    std::cin >> a >> b;
    std::cout << "The result is: " << multiply(a, b) << std::endl;
    return 0;
}