#include <iostream>
#include <vector>

double find_zero(std::vector<double> xs){
    if(xs.size() % 2 != 0) return -1; // Return -1 if number of coefficients is odd
    double root = -xs[1]/(2*xs[0]); 
    return std::round(root);
}

int main() {
    std::vector<double> inputCoeffs;
    
    int ncoeff;
    cout << "Enter the number of coefficients: ";
    cin >> ncoeff;

    for(int i=0; i<ncoeff; i++){
        double coeff;
        cout << "Enter coefficient " << i+1 << ": ";
        cin >> coeff;
        inputCoeffs.push_back(coeff);
    }

    double solution = find_zero(inputCoeffs);  
    if (solution == -1) {
        std::cout << "Error: number of coefficients is odd." << std::endl;
    } else {
        std::cout << "The zero of the given polynomial is " << solution << "." << std::endl;
    }
    
    return 0;
}