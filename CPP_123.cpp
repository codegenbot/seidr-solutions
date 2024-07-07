#include <vector>
#include <algorithm>

std::vector<int> get_odd_collatz(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

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
    return result;
}

int main() {
    assert(issame(get_odd_collatz(6), std::vector<int>({1, 5})));  
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    std::vector<int> output = get_odd_collatz(input);
    for (int num : output) {
        std::cout << num << " ";
    }
    return 0;
}