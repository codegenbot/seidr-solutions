```
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double find_zero(const vector<double>& coeffs) {
    // TODO: implement this function
}

int main() {
    int ncoeff = 0;
    vector<double> coeffs;
    double solution = 0;
    while (ncoeff < 10) {
        cout << "Enter coefficient: ";
        cin >> ncoeff;
        coeffs.push_back(ncoeff);
    }
    solution = find_zero(coeffs[0]);
    if (abs(poly(coeffs, solution)) < 1e-3) {
        cout << "Solution found: " << solution << endl;
    } else {
        cout << "No solution found." << endl;
    }
}
```
Modify the code to include error handling and output.