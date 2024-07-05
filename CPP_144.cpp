#include <iostream>
#include <sstream>
#include <string>
#include <cassert>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool simplify(const std::string &x, const std::string &n) {
    int x_num, x_den, n_num, n_den;
    char sep;
    
    std::stringstream ss_x(x);
    ss_x >> x_num >> sep >> x_den;
    
    std::stringstream ss_n(n);
    ss_n >> n_num >> sep >> n_den;
    
    int result_num = x_num * n_num;
    int result_den = x_den * n_den;
    
    int result_gcd = gcd(result_num, result_den);
    
    result_num /= result_gcd;
    result_den /= result_gcd;
    
    return result_den == 1;
}

int main() {
    assert(simplify("1/5", "1/5") == false);
    assert(simplify("2/3", "3/2") == true);
    std::cout << "All tests passed." << std::endl;
    return 0;
}