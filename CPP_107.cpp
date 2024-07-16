#include <vector>
#include <string>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> res = {0, 0};
    for (int i = 1; i <= n; ++i) {
        std::string s = std::to_string(i);
        std::string rev = s;
        std::reverse(rev.begin(), rev.end());
        if (s == rev) {
            if (i % 2 == 0) {
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // Main function where you can use the even_odd_palindrome function
    return 0;
}