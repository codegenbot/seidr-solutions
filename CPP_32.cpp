```cpp
#include <iostream>
#include <vector>
#include <cmath>

double find_zero(std::vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double root = -xs[1]/(2*xs[0]); 
    return std::round(root);
}

int main() {
    std::vector<double> inputCoeffs;
    int ncoeff;
    std::cout << "Enter the degree of the polynomial (n): ";
    std::cin >> ncoeff;
    
    for(int i = 0; i <= ncoeff; i++) {
        double coeff;
        std::cout << "Enter coefficient " << i << ": ";
        std::cin >> coeff;
        inputCoeffs.push_back(coeff);
    }
    
    double solution = find_zero(inputCoeffs);  
    if (solution == -1) {
        std::cout << "Error: number of coefficients is odd." << std::endl;
    } else {
        std::cout << "The zero of the polynomial is: " << solution << std::endl;
    }
}