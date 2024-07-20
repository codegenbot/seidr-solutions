#include <string>
#include <sstream>
#include <iostream>

bool simplify(std::string x, std::string n) {
    std::stringstream ss_x(x), ss_n(n);
    int num_x, den_x, num_n, den_n;
    char slash;

    ss_x >> num_x >> slash >> den_x;
    ss_n >> num_n >> slash >> den_n;

    return (num_x * den_n == num_n * den_x);
}

int main() {
    std::string x, n;
    std::cin >> x >> n;

    if (simplify(x, n)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}