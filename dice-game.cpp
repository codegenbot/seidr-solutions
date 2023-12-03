#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int total_outcomes = n * m;
    int favorable_outcomes = (n - 1) * m;

    double probability = static_cast<double>(favorable_outcomes) / static_cast<double>(total_outcomes);
    cout << fixed << setprecision(2) << probability << endl;

    return 0;
}