#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

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
    std::cout << std::boolalpha;
    std::cout << (simplify("1/5", "1/5") == false) << std::endl;
    return 0;
}