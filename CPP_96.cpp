#include <vector>
#include <cassert>
#include <iostream>

std::vector<int> count_up_to(int n);

bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    assert(issame(count_up_to(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));

    std::cout << "Test case passed!" << std::endl;

    return 0;
}

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;

    for (int i = 2; i < n; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes.push_back(i);
        }
    }

    return primes;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Compare vector elements and return true if they are the same, false otherwise
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}