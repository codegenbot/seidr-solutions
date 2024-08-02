#include <cmath>
#include <cassert>
using namespace std;

int closest_integer(const string& value) {
    double num = stod(value);
    int closestInt = round(num);
    if (fabs(num - closestInt) == 0.5) {
        closestInt = (num - closestInt) > 0 ? std::ceil(num) : std::floor(num);
    }
    return closestInt;
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}