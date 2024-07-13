#include <iostream>

double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 1; i <= n && i < m; i++) {
        if (i == 1)
            p += (m - 1) / total;
        else
            p += (m - i + 1) / total;
    }

    return p;
}

int main(int argc, char** argv) { 
    std::cout << probability(51,92);
}