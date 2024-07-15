#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double count = 0.0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i > j) {
                count++;
            }
        }
    }

    std::ios_base::fmtflags flags = cout.flags();
    double result = count / total;
    cout << fixed << setprecision(6) << result << endl;
    cout.flags(flags);
}

int main() {
    int n, m;
    cin >> n >> m;
    diceGame(n, m);
    return 0;
}