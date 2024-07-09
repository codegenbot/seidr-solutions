#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (long long)n * m;
    double count = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }
    
    return count / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    std::cout << fixed << setprecision(6);
    std::cout << probability(n, m) << endl;
    return 0;
}