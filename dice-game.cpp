#include <vector>
using namespace std;

double diceGame(int n, int m) {
    if(n <= m)
        return 1 - (double)m / (n + m);
    else
        return (double)(m) / (n + m);
}