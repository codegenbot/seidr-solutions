#include <vector>
#include <iostream>

std::vector<int> filter_integers(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame({3, 3, 3}, filter_integers({3, 'c', 3, 3, 'a', 'b'})));
    return 0;
}