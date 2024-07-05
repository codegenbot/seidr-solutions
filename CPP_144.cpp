#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

pair<int, int> parse_fraction(const string& frac) {
    size_t pos = frac.find('/');
    int numerator = stoi(frac.substr(0, pos));
    int denominator = stoi(frac.substr(pos + 1));
    return make_pair(numerator, denominator);
}

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

pair<int, int> simplify_fraction(pair<int, int> frac) {
    int gcd_value = gcd(frac.first, frac.second);
    frac.first /= gcd_value;
    frac.second /= gcd_value;
    return frac;
}

bool simplify(const string& x, const string& n) {
    auto [num_x, den_x] = parse_fraction(x);
    auto [num_n, den_n] = parse_fraction(n);

    auto simplified_x = simplify_fraction(make_pair(num_x, den_x));
    auto simplified_n = simplify_fraction(make_pair(num_n, den_n));

    return simplified_x == simplified_n;
}

int main() {
    string x, n;
    cin >> x >> n;
    cout << (simplify(x, n) ? "True" : "False") << endl;
    return 0;
}