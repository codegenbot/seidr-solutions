#include <iostream>

void solveProblem() {
    int n, sum = 0;
    std::cin >> n;

    for(int i=1; i<=n; i++) {
        sum += i;
    }

    std::cout << sum << std::endl;
}

int main() {
    solveProblem();
    return 0;
}