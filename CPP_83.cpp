#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= pow(10.0, n - 1); i++) { 
        if ((i % 10 == 1 || static_cast<int>(i / pow(10.0, n - 1)) % 10 == 1)) {
            count++;
        }
    }
    return count;
}