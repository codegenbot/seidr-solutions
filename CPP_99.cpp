#include <sstream>
using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    return (num >= 0) ? ceil(num) : floor(num);
}