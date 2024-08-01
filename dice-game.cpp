```c++
#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double total = (n * m);
    double probability = 0;
    
    for(int i = 1; i <= m; i++) {
        for(int j = i + 1; j <= n; j++) {
            probability += (1.0 / (n * m));
        }
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