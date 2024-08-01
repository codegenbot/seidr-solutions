#include <cmath>

using namespace std;

bool is_simple_power(int x, int n) {
    double log_x = log(x);
    double log_n = log(n);

    if (std::floor(std::log(x)) / std::log(n) == 1)
        return true;
    else
        return false;
}