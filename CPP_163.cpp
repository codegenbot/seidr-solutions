#include <vector>
#include <cassert>

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

std::vector<int> issame() {
    std::vector<int> a = generate_integers(17, 89);
    std::vector<int> result;
    for (int i : a) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(!issame().empty());
    return 0;
}