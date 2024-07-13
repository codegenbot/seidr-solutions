#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double numerator = 0.0; 
    string result;
    for(int i = 1; i < n; i++) {
        result += to_string(n - i) + "+";
    }
    double denominator = (double)(n*m);
    
    double probability = stod(result.substr(0, result.length()-1)) / denominator;
    cout << "The probability that Peter rolls strictly higher than Colin is: " << fixed << setprecision(6) << probability << endl;

    return 0;
}