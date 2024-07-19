#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> res;
    int n = 5; // Example input value
    if (n >= 0) {
        res.push_back(3);
        if (n > 0) {
            res.push_back(1);
            for (int i = 2; i <= n; ++i) {
                if (i % 2 == 0) {
                    res.push_back(1 + i / 2);
                } else {
                    res.push_back(res[i - 1] + res[i - 2]);
                }
            }
        }
    }
    assert (issame(res, {3, 1, 2, 3, 5, 8}));
}