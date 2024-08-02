
// Add necessary includes
#include <iostream>
#include <vector>

// Define function signature
int get_matrix_triples(int n) {
    int count = 0;
    std::vector<int> a(n);

    // Populate the vector
    for (int i = 0; i < n; ++i) {
        a[i] = i * i - i + 1;
    }

    // Count triples
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if ((a[i] + a[j] + a[k]) % 3 == 0) {
                    count++;
                }
            }
        }
    }

    return count;
}

// Handle input and output
int main() {
    int n;
    std::cin >> n;
    std::cout << get_matrix_triples(n) << std::endl;
    return 0;
}