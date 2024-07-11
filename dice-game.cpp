```cpp
#include <iostream>

double getProbability(int n, int m) {
    if(n <= m){
        return 0;
    }
    return 1.0 * (n - m) / (n * m);
}

int main() {
    int n, m;
    std::cout << "Enter the value of 'n': ";
    std::cin >> n;
    std::cout << "Enter the value of 'm': ";
    std::cin >> m;
    double result = getProbability(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}