#include <vector>
#include <cassert>

std::vector<int> issame(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(issame(17, 89) == std::vector<int>{});
    return 0;
}