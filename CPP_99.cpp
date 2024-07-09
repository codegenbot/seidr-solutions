#include <string>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int integer = lround(num);

    if (num - integer >= 0.5)
        return integer + 1;
    else
        return integer;
}