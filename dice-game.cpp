#include <vector>
using namespace std;

double game(int n, int m) {
    double total = (double)n * m;
    double probability = 0.0;
    
    // Calculate the total possible outcomes
    for (int i = 1; i <= min(n,m); i++) {
        if (n > m) {
            probability += (double)(n-i+1) / n * (m - i + 1) / m;
        }
        else if (n < m) {
            probability += (double)i / n * (m - i + 1) / m;
        }
    }
    
    return probability / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << game(n, m) << endl;
    return 0;
}