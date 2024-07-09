#include <iostream>
using namespace std;

double probability(int n, int m) {
    return 1.0 - 1.0/(double)n * (1.0*(m+1));
}

int main() {
    cout << "The probability that Peter rolls strictly higher than Colin is: "
         << fixed << setprecision(8) << probability(34,24) << endl;
    return 0;
}