#include <iostream>
#include <vector>

int get_matrix_triples(int n) {
    std::vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        a[i] = i * i - i + 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((a[i] + a[j] + a[k]) % 3 == 0) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    int result = get_matrix_triples(n);
    std::cout << "Number of matrices satisfying the condition: " << result << std::endl;
    return 0;
}