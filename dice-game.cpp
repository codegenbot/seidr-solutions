```cpp
#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double total = (n * m);
    double probability;
    if(m > n){
        probability = (n * 1.0 / total);
    } else {
        probability = (m * 1.0 / total);
    }
    return probability;
}

int main() {
    int n = 6; 
    int m = 4;
    double probability = calculateProbability(n, m);
    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;
    return 0;
}