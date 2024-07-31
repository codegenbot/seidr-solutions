// Include missing headers
#include <vector>
#include <cassert>
#include <cmath>

// Use namespace std to avoid explicit scoping
using namespace std;

// Change vector<double> to std::vector<double>
std::vector<double> coeffs = {1, -2, 1}; 

// Pass coeffs by reference in find_zero function
double solution = find_zero(coeffs);

// Implement find_zero function declaration
double find_zero(const std::vector<double>& coeffs);

// Implement poly function declaration
double poly(const std::vector<double>& coeffs, double x);