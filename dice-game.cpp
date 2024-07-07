#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double peterHighProbability = 0;
    
    for(int i = 1; i <= n-1; i++){
        for(int j = 1; j <= m; j++){
            if(i > j){
                peterHighProbability++;
            }
        }
    }
    
    return peterHighProbability / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}