#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> calculateSequence(int n) {
    std::vector<int> result;

    while (n != 1) {
        result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }

    result.push_back(1);
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = calculateSequence(n);

    return 0;
}