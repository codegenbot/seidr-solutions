```cpp
#include <iostream>
#include <iomanip>

double calculateProbability(int n, int m) {
    if(n <= m)
        return 0.0;

    double totalCases = (double)n * m;
    double successfulCases = (n - 1) * m;

    return 1.0 - successfulCases / totalCases;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << std::fixed << std::setprecision(1) << calculateProbability(n, m) << std::endl;
    return 0;
}