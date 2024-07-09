#include <string>
#include <cmath>
using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int lower = floor(num);
    int upper = ceil(num);
    return (num - lower < upper - num) ? lower : upper;
}