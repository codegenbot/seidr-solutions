#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = n % 2; i <= n; i += 2) {
        result.push_back(i);
    }
    return result;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));

    return 0;
}