#include <cmath>

using namespace std;

bool is_simple_power(int x, int n) {
    double log_val = log(x) / log(n);
    return round(log_val) == log_val;
}