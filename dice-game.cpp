#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double sum = 0.0;
    // Calculate probability where Peter rolls at most equal to Colin
    for(int i = 1; i <= m; i++) {
        if(i >= n) {
            sum += (m - i + 1) / (double)(n * m);
        } else {
            sum += 1.0;
        }
    }
    cout << fixed << setprecision(10) << 1 - sum << endl;

    return 0;
}