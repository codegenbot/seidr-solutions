#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    std::vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i - 1]);
            }
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> vec1 = tri(5);
    std::vector<int> vec2 = tri(5);
    bool same = issame(vec1, vec2);
    return 0;
}