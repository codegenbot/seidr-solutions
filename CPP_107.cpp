#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        std::string str = std::to_string(i);
        std::string rev = str;
        std::reverse(rev.begin(), rev.end());
        if (str == rev) {
            i % 2 == 0 ? even++ : odd++;
        }
    }

    return {even, odd};
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}