#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = pow(n + m - 1, 2);
    double peter = pow(n, 2);
    return (peter + m - 1) / total;
}