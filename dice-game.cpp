```cpp
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
    for(int i = 1; i < m; i++) {
        double prob = (n-i) / (double)n - ((m-i+1) / (double)m);
        sum += prob;
        cout << fixed << setprecision(10) << prob << " "; 
    }
    cout << endl;

    return 0;
}