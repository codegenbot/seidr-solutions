#include <iostream>
#include <string>
#include <utility> // for std::pair
#include <algorithm> // for std::gcd
using namespace std;

bool simplify(string x, string n) {
    auto parse_fraction = [](string frac) {
        size_t pos = frac.find('/');
        int numerator = stoi(frac.substr(0, pos));
        int denominator = stoi(frac.substr(pos + 1));
        return make_pair(numerator, denominator);
    };

    auto gcd = [](int a, int b) {
        return std::gcd(a, b);
    };

    auto simplify_fraction = [&](pair<int, int> frac) {
        int gcd_value = gcd(frac.first, frac.second);
        frac.first /= gcd_value;
        frac.second /= gcd_value;
        return frac;
    };

    auto [num_x, den_x] = parse_fraction(x);
    auto [num_n, den_n] = parse_fraction(n);

    auto simplified_x = simplify_fraction(make_pair(num_x, den_x));
    auto simplified_n = simplify_fraction(make_pair(num_n, den_n));

    return simplified_x == simplified_n;
}