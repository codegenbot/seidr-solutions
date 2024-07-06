#include <vector>
#include <algorithm>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        if (n % 2 != 0)
            result.push_back(n);
    }
    return result;
}

int main() {
    assert(std::equal({get_odd_collatz(1)}, {1}));
    std::vector<int> numbers;
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    numbers = get_odd_collatz(input);
    std::cout << "The Collatz sequence is: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}