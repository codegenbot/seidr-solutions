#include <vector>
using namespace std;

double diceGame(int n, int m) {
    return (double)(n-m)/(n+m-1);
}