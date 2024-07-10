#include <cmath>

using namespace std;

bool is_simple_power(int x, int n) {
    return pow(n, round(log(x)/log(n))) == x;
}