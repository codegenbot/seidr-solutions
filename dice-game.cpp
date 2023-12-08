#include <iostream>
using namespace std;

double probability(int i, int j) {
    double prob = 0;
    for (int x = 1; x <= i; x++) {
        for (int y = 1; y <= j; y++) {
            if (x > y) {
                prob += 1.0 / (i * j);
            }
        }
    }
    return prob;
}

int main() {
    int i, j;
    cin >> i >> j;
    cout << probability(i, j) << endl;
    return 0;
}