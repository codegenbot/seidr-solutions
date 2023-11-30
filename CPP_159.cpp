#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = remaining - eaten;
    return {eaten, left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    // more test cases...
    return 0;
}