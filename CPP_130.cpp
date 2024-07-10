#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    std::vector<int> result;
    if (n == 0) {
        result.push_back(0);
        return result;
    }

    result.push_back(3);
    if (n == 1) {
        return result;
    }

    result.push_back(1);
    if (n == 2) {
        return result;
    }

    result.push_back(2);
    if (n == 3) {
        return result;
    }

    for (int i = 4; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }

    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(tri(1), {1, 3}));
}