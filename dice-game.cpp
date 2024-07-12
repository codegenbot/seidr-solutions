
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    long double probability = (n - 1) / (2.0 * n * m);

    cout << fixed << setprecision(8) << probability << endl;
    
    return 0;
}