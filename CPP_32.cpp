#include <vector>
#include <cmath>

double find_zero(std::vector<double> xs) {
    double sum = 0;
    int power = 0;
    
    for (int i = xs.size() - 1; i >= 0; i--) {
        sum += xs[i] * pow(-1, xs.size() - 1 - i) * pow(solution(), power);
        power++;
    }
    
    return -sum;
}

double solution() {
    double x = 0.5;
    for (int i = 2; i < xs.size(); i++)
        if (xs[i] != 0)
            return x;
    return -1.0 * xs[0];
}