#include <cmath>
double num = stod(value);
int lower = floor(num);
int upper = ceil(num);
return (num - lower < upper - num) ? lower : upper;