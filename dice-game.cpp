#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double probability = 0.0;
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(i>j)
                probability += 1.0;
        }
    }
    return probability / (n*m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m);
    return 0;
}