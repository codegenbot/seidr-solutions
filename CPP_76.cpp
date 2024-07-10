#include <cmath>

bool checkPower(int x, int n) {
    int power;
    if (x <= 0 || n <= 0) {
        return false;
    }

    power = log(x) / log(n);

    return (power == (int)power);
}