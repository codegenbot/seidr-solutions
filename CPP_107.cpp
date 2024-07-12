#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 0; i <= n; ++i) {
        result.push_back(i % 2 == 0 ? 0 : 1);
    }
    return result;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
}