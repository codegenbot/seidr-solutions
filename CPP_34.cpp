#include <algorithm>

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
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