#include <iostream>
#include <sstream>
#include <string>

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool simplify(std::string x, std::string n) {
    int x_num, x_den, n_num, n_den;
    char slash;
    
    std::stringstream x_stream(x);
    x_stream >> x_num >> slash >> x_den;
    
    std::stringstream n_stream(n);
    n_stream >> n_num >> slash >> n_den;
    
    // Simplify x
    int gcd_x = gcd(x_num, x_den);
    x_num /= gcd_x;
    x_den /= gcd_x;
    
    // Simplify n
    int gcd_n = gcd(n_num, n_den);
    n_num /= gcd_n;
    n_den /= gcd_n;
    
    // Check if both fractions are equal
    return x_num == n_num && x_den == n_den;
}

int main() {
    std::string x, n;
    std::cout << "Enter the first fraction (x): ";
    std::cin >> x;
    std::cout << "Enter the second fraction (n): ";
    std::cin >> n;
    
    if(simplify(x, n)) {
        std::cout << "Fractions are equal when simplified.\n";
    } else {
        std::cout << "Fractions are not equal when simplified.\n";
    }
    
    return 0;
}