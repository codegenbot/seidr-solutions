#include <vector>
using namespace std;

double probability(int n, int m) {
    double total = (long long)n * m;
    double peterWins = 0;
    
    for(int i = 1; i <= n - 1; i++) {
        if(i > m) {
            peterWins += (m + 1);
        } else {
            peterWins += min(n, m) - i;
        }
    }
    
    return peterWins / total;
}