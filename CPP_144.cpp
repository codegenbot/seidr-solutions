#include <iostream>
#include <sstream>
#include <string>
#include <numeric>

bool simplify(std::string x, std::string n) {
    int x_num, x_den, n_num, n_den;
    char slash;
    
    std::stringstream x_stream(x);
    x_stream >> x_num >> slash >> x_den;
    
    std::stringstream n_stream(n);
    n_stream >> n_num >> slash >> n_den;
    
    int result_num = x_num * n_num;
    int result_den = x_den * n_den;
    
    int gcd = std::gcd(result_num, result_den);
    
    result_num /= gcd;
    result_den /= gcd;
    
    return result_num == result_den;
}

int main() {
    std::cout << std::boolalpha; // for displaying true/false instead of 1/0
    std::cout << (simplify("1/5", "1/5") == false) << std::endl; // should print true 
    return 0;
}