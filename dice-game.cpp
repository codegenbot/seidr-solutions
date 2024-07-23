```cpp
#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    for(int i = 1; i <= min(n, m); i++) {
        p += (n - i) / total;
    }
    
    return p;
}

int main() {
    int n, m;
    if (!(cin >> n >> m)) {
        cout << "Invalid input. Please enter two integers separated by a space." << endl;
        return 1; 
    }
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
}