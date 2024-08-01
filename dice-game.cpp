```cpp
#include <iostream>
#include <iomanip>

double calculateProbability(int n, int m) {
    double p = (n - m) / static_cast<double>(n * m);
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << std::fixed << std::setprecision(1) << calculateProbability(n, m) << std::endl;
    return 0;
}