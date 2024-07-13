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
    ostringstream oss; 
    oss << fixed;
    for(int i = 1; i < n && i <= m; i++) {
        double prob = (n - i) * m / (double)(n * m);
        sum += prob;
        oss << setprecision(10) << prob << " ";
    }
    cout << oss.str() << endl;

    return 0;
}