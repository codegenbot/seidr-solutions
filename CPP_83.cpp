#include <stdio.h>
using namespace std;

int starts_one_ends(int n) {
    if (n == 1) return 1;
    return 18 * pow(10, n - 2);
}