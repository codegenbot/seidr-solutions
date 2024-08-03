#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return result;
}

std::vector<int>::iterator unique_copy(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    if (first == last)
        return first;
    for (; first != last; ++first) {
        if (first + 1 != last && *first == *(first+1))
            continue;
        *first = *first;
    }
    return --first;
}