#include <cmath>

using namespace std;

bool is_simple_power(int x, int n) {
    double log_x = log(x);
    double log_n = log(n);

    if (fmod(log_x, log_n) == 0)
        return true;
    else
        return false;
}