#include <iostream>
using namespace std;

double probabilityOfHigher(int n, int m) {
    double totalPossibilities = n * m;
    double higherPossibilities = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                higherPossibilities++;
            }
        }
    }
    
    return higherPossibilities / totalPossibilities;
}

int main() {
    int n, m;
    
    cin >> n;
    cin >> m;
    
    double probability = probabilityOfHigher(n, m);
    
    cout << probability << endl;
    
    return 0;
}