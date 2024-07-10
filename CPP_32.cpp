#include <vector>
using namespace std;

double find_zero(vector<double> xs) {
    double root = -xs[1] / (2 * xs[0]);
    return round(root, 10);
}