
#include <vector>

std::vector<int> pluck(const std::vector<int>& v, int index) {
    std::vector<int> result;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == index) {
            result.push_back(v[i]);
        }
    }
    return result;
}

int main() {
    std::vector<int> v = {7, 9, 7, 1};
    assert(issame(pluck(v, 0), {}));
    assert(issame(pluck(v, 1), {7, 7}));
    assert(issame(pluck(v, 2), {9}));
    return 0;
}