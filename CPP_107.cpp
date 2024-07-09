#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> solve(int n) {
    std::vector<int> res(2, 0);
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