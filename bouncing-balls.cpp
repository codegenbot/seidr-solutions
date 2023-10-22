#include <vector>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main() {
    double h, h2;
    int n;
    while(cin >> h >> h2 >> n) {
        double bounciness = h2 / h;
        double distance = 0;
        for(int i = 0; i < n; i++) {
            distance += h;
            h *= bounciness;
        }
        printf("%.5f\n", distance);
    }
    return 0;
}
