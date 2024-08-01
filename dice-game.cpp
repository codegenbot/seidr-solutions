```c++
#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double total = (n * m);
    return (m * 1.0 / total);
}

int main() {
    int n = 6; 
    int m = 4; 
    double result = calculateProbability(n, m);
    cout << "Probability: " << result << endl;
    return 0;
}