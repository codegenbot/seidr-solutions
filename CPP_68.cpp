#include <vector>
#include <algorithm>

std::vector<int> pluck(const std::vector<std::vector<int>>& v) {
    std::vector<int> result;
    for (const auto& i : v[0]) {
        result.push_back(i);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main(int argc, char *argv[]) {
    assert(issame(pluck({{7, 9}, {7, 1}}), {}));
    return 0;
}