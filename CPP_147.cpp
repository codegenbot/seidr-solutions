#include <iostream>
#include <vector>

int get_matrix_triples(int n) {
    std::vector<int> a(n);
    for (int i = 1; i <= n; i++) {
        a[i-1] = i * i - i + 1;
    }
    
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
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
    std::cout << "Number of valid triples: " << result << std::endl;
    
    return 0;
}