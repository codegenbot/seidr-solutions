#include <vector>
using namespace std;

double find_zero(vector<double> xs) {
    if (xs.size() % 2 != 0 || xs[0] == 0) {
        return -1.0; // invalid input, return -1.0 to indicate error
    }

    double a = xs[xs.size()-1]; // largest non-zero coefficient
    double b = 0;
    for (int i = 0; i < xs.size() - 1; i++) {
        if (i % 2 == 1) {
            b += xs[i];
        }
    }

    return -b / a;
}