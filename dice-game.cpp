#include <iostream>
using namespace std;

double probabilityOfPeterHigher(int n, int m) {
    if (n <= 1 || m <= 0) {
        return 0.0;
    }
    if (n >= m) {
        return 0.5;
    }
    return static_cast<double>(n) / m;
}

int main() {
    int n, m;
    cin >> n >> m;
    double probability = probabilityOfPeterHigher(n, m);
    cout << probability << endl;
    return 0;
}