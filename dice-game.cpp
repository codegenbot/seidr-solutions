#include <iostream>
using namespace std;
#include <iomanip>

double diceGame(int n, int m) {
    double total = 1.0; // Initialize total with 1

    for (int i = 1; i <= m; i++) { 
        if(i > n){ 
            return 0.0; 
        } 

        for(int j = 1; j < i; j++) {
            total += 1.0;
        }
    }

    return 1.0 / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << diceGame(n, m) << endl;
    return 0;
}