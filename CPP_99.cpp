```cpp
#include <string>
#include <cmath>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    return (num >= 0) ? ceil(num) : floor(num);
}

int main() {
    assert(closest_integer("0") == 0);
}