#include <vector>
#include <cmath>

double find_zero(std::vector<double> xs){
    double solution = xs[0];
    for (int i = 1; i < xs.size(); i++){
        solution = xs[i] / xs[0] - solution;
        while (std::abs(solution) > 1e-6){
            solution = xs[i] / xs[0] - solution;
        }
    }
    return solution;
}