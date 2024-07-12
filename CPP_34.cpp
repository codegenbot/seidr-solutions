#include <algorithm>

vector<int> removeDuplicates(vector<int> l) {
    vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator myUnique(vector<int>::iterator start, vector<int>::iterator end) {
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