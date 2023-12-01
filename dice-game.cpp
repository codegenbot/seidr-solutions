#include <iostream>
#include <iomanip>
using namespace std;

double probabilityOfPeterWinning(int n, int m)
{
    double totalOutcomes = n * m;
    double peterWinningOutcomes = n-1;
    return peterWinningOutcomes / totalOutcomes;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probabilityOfPeterWinning(n, m) << endl;

    return 0;
}