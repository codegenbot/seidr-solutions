#include <vector>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i].size() != b[i].size()) return false;
        for (int j = 0; j < a[i].size(); ++j) {
            if (a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primes.push_back(i);
    }
    return primes;
}

std::vector<std::vector<int>> generateMatrix(int n, int m) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = i * m + j;
        }
    }
    return matrix;
}

std::vector<std::vector<int>> generateMatrix2(int n, int m) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = (i + j) % 2;
        }
    }
    return matrix;
}

int main() {
    std::vector<std::vector<int>> a = generateMatrix(3, 4);
    std::vector<std::vector<int>> b = generateMatrix2(3, 4);
    
    if (issame(a, b)) {
        for (const auto& row : a) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Matrices are not the same." << std::endl;
    }
}