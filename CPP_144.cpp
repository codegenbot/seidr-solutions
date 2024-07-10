#include <string>
#include <cassert>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

std::string simplify(std::string fraction) {
    int num = stoi(fraction.substr(0, fraction.find('/')));
    int den = stoi(fraction.substr(fraction.find('/') + 1));
    int common = gcd(num, den);
    return to_string(num / common) + "/" + to_string(den / common);
}

bool checkDivisibility(std::string x, std::string n) {
    std::string simplified_x = simplify(x);
    std::string simplified_n = simplify(n);

    int num1 = stoi(simplified_x.substr(0, simplified_x.find('/')));
    int den1 = stoi(simplified_x.substr(simplified_x.find('/') + 1));
    int num2 = stoi(simplified_n.substr(0, simplified_n.find('/')));
    int den2 = stoi(simplified_n.substr(simplified_n.find('/') + 1));

    return (num1 * num2) % (den1 * den2) == 0;
}

int main() {
    assert(checkDivisibility("1/5", "1/5") == false);
    return 0;
}