#include <iostream>
#include <cmath> 
using namespace std;

int rounded_avg(int n, int m);

int main() {
    int n, m;
    cin >> n >> m;
    if (n <= m) {
        cout << rounded_avg(n, m) << endl;
    } else {
        cout << "Error: Invalid input. Please enter numbers in ascending order." << endl;
    }
    return 0;
}

int rounded_avg(int n, int m) {
    if (n > m) return -1;
    double sum = 0.0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((sum / (m - n + 1)) * 2) / 2.0;
    return (int)avg;
}