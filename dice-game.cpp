#include <vector>
#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    if(n == 1 || m == 1)
        return 0.0;
    
    double numerator = (n - 1) * (m);
    double denominator = n * m;
    
    return (double)numerator / denominator;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << calculateProbability(n, m) << endl;
    return 0;
}