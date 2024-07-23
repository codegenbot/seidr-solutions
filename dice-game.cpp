#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if(i > j) { 
                total++;
            }
        }
    }
    return 1.0 - (total / ((double)n * m));
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    double result = probability(n, m);
    cout << "Probability: " << result << endl;
    return 0;

}