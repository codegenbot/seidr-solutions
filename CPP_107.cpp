#include <vector>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}

void solveProblem() {
    std::vector<int> result = even_odd_palindrome(1);
    assert(result == std::vector<int>{0, 1});
}

int main() {
    solveProblem();
    return 0;
}