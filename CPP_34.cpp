#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result(l.begin(), myunique(l.begin(), l.end()).end());
    return result;
}

std::vector<int>::iterator myunique(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    if (start == end)
        return end;

    sort(start, end);

    auto it = start;
    while (it != end) {
        auto next = it + 1;
        while (next != end && *next == *it) {
            ++next;
        }
        it = next;
    }

    return it;
}

int main() {
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}) , {0, 2, 3, 5, 9, 123}));
    return 0;
}