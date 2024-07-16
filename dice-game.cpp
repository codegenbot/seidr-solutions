#include <iostream>
using namespace std;

double probability(int n, int m) {
    if(n == 0 || m == 0)
        throw runtime_error("The number of sides on the dice cannot be zero.");
    double total_outcomes = (double)n * m;
    double equal_outcomes = 0.0; 
    for(int i = 1; i <= m - 1; i++) {
        equal_outcomes += pow((double)(n) / m, i); 
    }
    return 1 - equal_outcomes; 
}

int main() {
    int n = 6; 
    int m = 6; 
    try {
        double result = probability(n, m);
        cout << "The probability is: " << (result * 100) << "%" << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}