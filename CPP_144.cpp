#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool simplify(string x, string n) {
    auto parse_fraction = [](string frac) {
        size_t pos = frac.find('/');
        int numerator = stoi(frac.substr(0, pos));
        int denominator = stoi(frac.substr(pos + 1));
        return make_pair(numerator, denominator);
    };

    auto gcd = [](int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    };

    auto [num_x, den_x] = parse_fraction(x);
    auto [num_n, den_n] = parse_fraction(n);

    int result_num = num_x * num_n;
    int result_den = den_x * den_n;
    int common_divisor = gcd(result_num, result_den);

    result_num /= common_divisor;
    result_den /= common_divisor;

    return result_num % result_den == 0;
}

int main() {
    string x, n;
    cout << "Enter first fraction: ";
    cin >> x;
    cout << "Enter second fraction: ";
    cin >> n;

    if (simplify(x, n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}