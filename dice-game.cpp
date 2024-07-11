#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double total = (n + m);
    if(n == 1 || m == 1){
        return 0;
    }
    return ((m - 1.0)/total);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(17) << getProbability(n, m) << endl;
    return 0;
}