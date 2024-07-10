#include<stdio.h>
#include<vector>
using namespace std;

int get_matrix_triples(int n) {
    vector<int> a(n);
    int count = 0;
    for (int i = 1; i <= n; i++) {
        a[i-1] = i * i - i + 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k <= n; k++) {
                if ((a[i] + a[j] + a[k]) % 3 == 0) {
                    count++;
                }
            }
        }
    }
    return count;
}