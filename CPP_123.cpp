#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> seq;
    seq.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
            if (n % 2 == 0) {
                n /= 2;
            }
        }
        if (n % 2 != 0) {
            seq.push_back(n);
        }
    }
    return seq;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}