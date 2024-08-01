#include <iostream>
#include <vector>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::vector<int> res = get_odd_collatz(num);
    for (int i : res) {
        std::cout << i << " ";
    }
    return 0;
}