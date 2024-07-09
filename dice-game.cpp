```cpp
#include<iostream>
using namespace std;

double probability(int n, int m) {
    double total = (n + m - 1);
    return (m - 1.0) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    cout << result << endl;
    return 0;
}