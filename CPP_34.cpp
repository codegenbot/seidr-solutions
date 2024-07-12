#include <algorithm>

std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result(std::unique_copy(l.begin(), l.end()), l.end());
    return result;
}

auto unique_copy = [](auto first, auto last)
{
    std::sort(first, last);
    first = std::unique(first, last);
    while (first != last) {
        ++first;
        --last;
    }
    return first;
};

template <typename T>
bool issame(std::vector<T> a, std::vector<T> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

assert(issame(std::vector<int>(unique({5, 3, 5, 2, 3, 3, 9, 0, 123})), {0, 2, 3, 5, 9, 123}));