```c++
#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double total = (n * m);
    double probability = 0;
    
    for(int i = 1; i <= n - 1; ++i) {
        probability += (m / (double)(n * m));
    }
    
    return probability;
}

int main() {
    int n = 6; 
    int m = 4; 
    double result = calculateProbability(n, m);
    cout << "Probability: " << result << endl;
    return 0;
}