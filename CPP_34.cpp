#include <algorithm>

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), std::unique_copy(l.begin(), l.end()).end());
    return result;
}

auto std::unique_copy = [](auto first, auto last)
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

int main() {
    assert(issame(std::vector<int>(unique({5, 3, 5, 2, 3, 3, 9, 0, 123})).begin(), {0, 2, 3, 5, 9, 123}));
}