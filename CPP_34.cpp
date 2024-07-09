#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), unique_end(l.end())));
    return result;
}

vector<int>::iterator unique_copy(iterator start, iterator end) {
    unordered_set<int> seen;
    for (auto it = start; it != end; ++it) {
        if (!seen.insert(*it).second)
            *it = 0; // mark as deleted
    }
    return erase_deletes(start, end);
}

vector<int>::iterator erase_deletes(iterator start, iterator end) {
    iterator it = start;
    while (it != end) {
        if (*it == 0) {
            ++it;
            continue;
        }
        *start++ = *it;
        ++it;
    }
    return start;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result = unique(l);
    for (int i : result) {
        printf("%d ", i);
    }
    return 0;
}