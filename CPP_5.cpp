#include <vector>
#include <cassert>

std::vector<int> intersperse(const std::vector<int>& vec, int value) {
    std::vector<int> result;
    for (int num : vec) {
        result.push_back(num);
        result.push_back(value);
    }
    result.pop_back();
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
}