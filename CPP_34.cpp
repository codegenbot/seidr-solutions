#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
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

std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result(l.begin(), myunique(l.begin(), l.end()).end());
    return result;
}