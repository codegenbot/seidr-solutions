#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - floor(number);
}

void solve_problem() {
    double num;
    std::cin >> num;
    
    std::cout << truncate_number(num) << std::endl;
}

int main() {
    solve_problem();
    return 0;
}