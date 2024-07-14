#include <vector>
using namespace std;

double game(int n, int m) {
    double total = 1.0 * n * m;
    double count = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (i > j)
                count++;
        }
    }
    
    return count / total;
}