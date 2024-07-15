#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - floor(number);
}

int main() {
  double number;
  std::cin >> number;
  double result = truncate_number(number);
  std::cout << result << std::endl;
  return 0;
}