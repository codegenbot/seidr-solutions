#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double total = 0.0;
    
    // calculate the number of ways Peter can get a score that is strictly higher than Colin
    for (int i = m + 1; i <= n; ++i) {
        total += 1.0 / m;
    }
    
    return total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << diceGame(n, m) << std::endl;
    return 0;
}