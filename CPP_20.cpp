#include <iostream>

int solve(int n) {
    // Add your solution here
    return n * n;
}

int main() {
    int x;
    std::cin >> x;
    
    int result = solve(x);
    std::cout << result;

    return 0;
}