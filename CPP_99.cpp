#include <sstream>
using namespace std;

string closest_integer(double num) {
    int integer = static_cast<int>(num);
    if (abs(num - integer) > abs(num - (integer + 1))) {
        return to_string(integer + 1);
    } else {
        return to_string(integer);
    }
}

int main() {
    assert(closest_integer(0.0) == "0");
    closest_integer(5.7); // Pass an integer
    return 0;
}