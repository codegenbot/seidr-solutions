#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    if (n < 2) {
        return result;
    }

    std::vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < n; ++i) {
        if (isPrime[i]) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int n = 20; // Example input
    std::vector<int> numbers1 = count_up_to(n);
    std::vector<int> numbers2 = count_up_to(n);

    if (issame(numbers1, numbers2)) {
        std::cout << "The results are the same." << std::endl;
    } else {
        std::cout << "The results are not the same." << std::endl;
    }

    return 0;
}