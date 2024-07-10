#include <string>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    if (num > 0) {
        return static_cast<int>(round(num));
    } else {
        return -static_cast<int>(ceil(-num));
    }
}