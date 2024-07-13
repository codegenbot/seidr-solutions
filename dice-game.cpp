```cpp
#include <iostream>
#include <string>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < n; i++) {
        p += (double)(n - i) / total;
    } 
    return p;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter value of n: ";
    getline(std::cin, str1);
    int n = stoi(str1);

    std::cout << "Enter value of m: ";
    getline(std::cin, str2);
    int m = stoi(str2);

    double result = diceGame(n, m);
    std::cout << "Probability that Peter rolls strictly higher than Colin is: " << result << std::endl; 

    return 0;
}