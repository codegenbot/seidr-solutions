// Include missing headers
#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

// Use namespace std to avoid explicit scoping
using namespace std;

// Change vector<double> to std::vector<double>
std::vector<double> coeffs = {1, -2, 1};

// Fix variable name from coeff to coeffs in push_back
coeffs.push_back(coeffs);

// Pass coeffs by reference in find_zero function
solution = find_zero(coeffs);