```
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == 0 && b.size() == 0) || (a.size() == b.size() && a == b);
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame({get_odd_collatz(12)}, {1, 2, 6}) == true);
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num < 0) {
        std::cout << "Error: Please enter a non-negative integer." << std::endl;
    } else {
        std::vector<int> result = get_odd_collatz(num);
        std::cout << "The Collatz Conjecture sequence for " << num << " is ";
        for (int i : result) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}