```c
#include <iostream>
using namespace std;

int main() {
    int n; 
    int m; 

    cout << "Enter the number of sides for Peter's die: "; 
    cin >> n; 

    cout << "Enter the number of sides for Colin's die: "; 
    cin >> m; 

    double result = getProbability(n, m);
    cout << "The probability is: " << result << endl;
    return 0;
}

double getProbability(int n, int m) {
    double p = 0;
    for(int i = 1; i < n; i++) {
        p += (1.0 / n) * (1.0 / m);
    }
    return p;
}