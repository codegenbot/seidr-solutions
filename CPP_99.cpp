#include <string>
#include <cmath>
using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    return (num >= 0) ? (int)ceil(num) : (int)floor(num);
}