#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool simplify(string x, string n) {
    int x_num, x_den, n_num, n_den;
    char sep;
    
    stringstream ss_x(x);
    ss_x >> x_num >> sep >> x_den;
    
    stringstream ss_n(n);
    ss_n >> n_num >> sep >> n_den;
    
    int result_num = x_num * n_num;
    int result_den = x_den * n_den;
    
    int result_gcd = gcd(result_num, result_den);
    
    result_num /= result_gcd;
    result_den /= result_gcd;
    
    return result_den == 1;
}

int main() {
    cout << boolalpha << simplify("1/5", "1/5") << endl; // expected output: false
    return 0;
}