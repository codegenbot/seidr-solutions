#include <cmath>
using namespace std;

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == int(y));
}

int main() {
    assert(is_simple_power(1, 12)==true);
    return 0;
}