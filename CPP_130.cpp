#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::is_permutation(v1.begin(), v1.end(), v2.begin());
}

std::vector<int> tri(int n) {
    std::vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n >= 1) {
            result.push_back(1);
            if (n >= 2) {
                result.push_back(1 + n / 2);
                for (int i = 3; i <= n; ++i) {
                    if (i % 2 == 0) {
                        result.push_back(1 + i / 2);
                    }
                    else {
                        result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
                    }
                }
            }
        }
    }
    return result;
}

int main() {
    assert(issame(tri(1), {3, 1}));

    return 0;
}