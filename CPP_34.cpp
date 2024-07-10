#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    if (first == last)
        return first;
    std::sort(first, last);
    first = unique_copy(first, get_unique(first, last));
    for (; first != last; ++first) {
        if (*first != *(first + 1))
            *std::prev(result.end()) = *first;
        else
            --last;
    }
    return ++first;
}

vector<int>::iterator get_unique(iterator first, iterator last) {
    while (first != last && *first == *(first + 1)) {
        ++first;
    }
    return first;
}