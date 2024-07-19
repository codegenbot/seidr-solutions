#include <vector>
#include <cassert>

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

std::vector<int> issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (int i : a) {
        if (std::find(b.begin(), b.end(), i) != b.end()) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(!issame(generate_integers(17, 89), {}).empty());
    return 0;
}