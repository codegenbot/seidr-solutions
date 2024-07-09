```cpp
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double sum = 0;
    for(int i = 0; i < coeffs.size(); i++){
        if(i % 2 == 1) sum += coeffs[i] * pow(x, i);
        else sum += coeffs[i];
    }
    return sum;
}

double find_zero(std::vector<double> coeffs, double x){
    if(coeffs.size() % 2 != 0) return -1; 
    double root = -coeffs[1]/(2*coeffs[0]); 
    return std::round(root);
}

int main() {
    // Declare and initialize the coeffs vector
    std::vector<double> coeffs;
    for(int i = 0; i < 3; i++) {
        double temp;
        std::cin >> temp;
        coeffs.push_back(temp);
    }

    // Call find_zero function here
    double solution = find_zero(coeffs, 0);

    // Ensure that poly is used after its declaration
    for(int i = 0; i < 10; i++) {
        // Use poly here
        assert (abs(poly(coeffs, solution))< 1e-3);
    }

    return 0;
}