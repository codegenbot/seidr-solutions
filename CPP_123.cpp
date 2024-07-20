#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> get_odd_collatz(int n) {
    vector<int> collatz;
    while (n != 1) {
        collatz.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    collatz.push_back(1);

    vector<int> odd_collatz;
    for (int num : collatz) {
        if (num % 2 != 0) {
            odd_collatz.push_back(num);
        }
    }

    sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}

int main() {
    if (issame(get_odd_collatz(1), {1})) {
        std::cout << "Test passed!";
    } else {
        std::cout << "Test failed!";
    }

    return 0;
}