#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> collatz_seq;
    while (n != 1) {
        collatz_seq.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    collatz_seq.push_back(1); // Adding the last element which is 1
    return collatz_seq;
}