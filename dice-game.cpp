#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (n + m);
    if(n > m){
        return ((n-m)*(1.0)/(2*n-m));
    }else{
        return 0;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << diceGame(n, m) << endl;
    return 0;
}