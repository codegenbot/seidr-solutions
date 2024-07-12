#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    double probability = 0.0;
    
    for (int i = 1; i <= n+1; ++i) {
        for (int j = 1; j <= m+1; ++j) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }
    
    cout << probability << endl;
    
    return 0;
}