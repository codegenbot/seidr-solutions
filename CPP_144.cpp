#include<stdio.h>
#include<string>
using namespace std;
bool simplify(string x, string n) {
    auto parse_fraction = [](string frac) {
        size_t pos = frac.find('/');
        int numerator = stoi(frac.substr(0, pos));
        int denominator = stoi(frac.substr(pos + 1));
        return make_pair(numerator, denominator);
    };
    
    auto [num_x, den_x] = parse_fraction(x);
    auto [num_n, den_n] = parse_fraction(n);
    
    int result_num = num_x * num_n;
    int result_den = den_x * den_n;
    
    return result_num % result_den == 0;
}