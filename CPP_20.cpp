#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int answer = 0;
    for (int i = 1; i <= n; i++) {
        answer += i;
    }

    std::cout << answer;

    return 0;
}