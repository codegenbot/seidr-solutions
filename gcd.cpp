#include <iostream>
#include <string>

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main() {
    int a = 0, b = 0;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::string strA = std::to_string(a);
    std::string strB = std::to_string(b);
    
    // your code here
}