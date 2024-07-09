Here is the completed code:

#include <string>

using namespace std;

double closest_integer(string value) {
    double num = stod(value);
    return (num >= 0) ? ceil(num) : floor(num);
}