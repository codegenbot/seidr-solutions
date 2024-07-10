#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::string result = calculateBinaryAverage(n, m);
    
    std::cout << result;

    return 0;
}