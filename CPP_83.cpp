#include <cmath>

int starts_one_ends(int n){
    return n == 1 ? 1 : 2 * 9 * pow(10.0, n - 2);
}