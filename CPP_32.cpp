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
    cout << "Enter the number of coefficients: ";
    cin >> ncoeff;
    
    for(int i=0; i<ncoeff; ++i){
        double coefficient;
        cout << "Enter coefficient " << (i+1) << ": ";
        cin >> coefficient;
        inputCoeffs.push_back(coefficient);
    }
    
    double solution = find_zero(inputCoeffs);  
    if (solution == -1) {
        cout << "Error: number of coefficients is odd." << endl;
    } else {
        cout << "The zero is: " << solution << endl;
    }
}