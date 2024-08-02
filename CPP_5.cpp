#include <cassert>
#include <vector>

std::vector<int> intersperse(const std::vector<int>& a, int num) {
    std::vector<int> result;
    for (int i : a) {
        result.push_back(i);
        result.push_back(num);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), std::vector<int>{2, 2, 2, 2, 2}));
    return 0;
}