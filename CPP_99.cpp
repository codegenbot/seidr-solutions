#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    return (int)(num > 0 ? floor(num + 0.5) : ceil(num - 0.5));
}