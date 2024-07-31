#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

std::vector<double> coeffs = {1, -2, 1}; 

double solution = find_zero(coeffs);

double find_zero(const std::vector<double>& coeffs);

double poly(const std::vector<double>& coeffs, double x);