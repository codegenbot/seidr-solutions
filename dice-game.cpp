#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 1; i <= m - 1; i++) { 
        p += (double)((m - i)) / total;
    }
    
    return p;
}

int main() {
    int n = 6; // Number of sides on Peter's die
    int m = 6; // Number of sides on Colin's die
    double result = probability(n, m);
    cout << "Probability: " << result << endl;
    return 0;
}