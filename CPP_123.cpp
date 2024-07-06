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
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    auto collatz = get_odd_collatz(n);
    if (collatz.size() > 0) {
        for (int i : collatz)
            std::cout << i << " ";
    }
    else
        std::cout << "No sequence found." << std::endl;
}