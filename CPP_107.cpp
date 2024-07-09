#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result = {0, 0};
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev = num;
        std::reverse(rev.begin(), rev.end());
        if (num == rev) {
            if ((num.back() - '0') % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    // Your code here

    assert(issame(even_odd_palindrome(1), {0, 1}));
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your function implementation
}