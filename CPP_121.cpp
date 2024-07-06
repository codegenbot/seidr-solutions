#include <vector>

int solutions(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;
    std::cout << "Sum of all odd numbers up to " << n << ": " << solutions(n) << std::endl;
    return 0;
}