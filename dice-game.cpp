#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double probability = 0;
    for(int i=1; i<m; ++i){
        probability += (double)(n-i)/((double)n*m);
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << getProbability(n, m);
    return 0;
}