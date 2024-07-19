#include <cmath>

int starts_one_ends(int n){
    return n == 1 ? 1 : 2 * 9 * static_cast<int>(pow(10, n - 2));
}