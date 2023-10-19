#include <bits/stdc++.h>
using namespace std;
/*

*/
int main()
{
    double h1, h2;
    int n;
    cin >> h1 >> h2 >> n;
    double bounciness_index = h2 / h1;
    double distance_traveled = h1;
    for(int i = 0; i < n; i++)
    {
        distance_traveled += h1 * bounciness_index;
        h1 = h1 * bounciness_index;
    }
    cout << fixed << setprecision(3);
    cout << distance_traveled;
}
