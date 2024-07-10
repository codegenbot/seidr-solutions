#include <vector>
#include <iostream>

using namespace std;

double probability(int n, int m) {
    if(n <= m)
        return 0;
    double total = (double)(n*m);
    double count = 0;
    for(int i=m+1; i<=n; i++)
        count += m;
    return count / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m);
    return 0;
}