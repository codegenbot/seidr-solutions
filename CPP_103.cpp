#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter two integers n and m: ";
    std::cin >> n >> m;

    std::string result = calculateBinaryAverage(n, m);
    std::cout << "Binary Average: " << result << std::endl;

    return 0;
}