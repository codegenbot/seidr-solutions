#include <iostream>
#include <vector>

int get_matrix_triples(int n) {
    std::vector<int> a(n);
    int count = 0;

    for (int i = 1; i <= n; i++) {
        a[i] = i * i - i + 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i] + a[j]) % 3 == 0) {
                count++;
            }
        }
    }

    return count;
}