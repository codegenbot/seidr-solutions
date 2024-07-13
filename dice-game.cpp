#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double sum = 0.0;
    for(int i = 1; i < n; i++) {
        sum += (double)(n-i) / (n*m);
        cout << fixed << setprecision(10) << (double)(n-i) / (n*m) << " "; 
    }
    cout << endl;

    return 0;
}