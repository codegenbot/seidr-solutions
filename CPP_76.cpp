#include <cmath>
using namespace std;

bool is_simple_power(int x, int n) {
    return pow(n, ceil(log(x)/log(n))) == x;
}

int main() {
    assert (is_simple_power(1, 12)==true);
}