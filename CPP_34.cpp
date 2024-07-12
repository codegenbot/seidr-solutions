#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), end(l));
    return unique_copy(result, result + l.size());
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    unordered_set<int> seen;
    for (auto it = first; it != last; ++it) {
        if (seen.insert(*it).second) {
            *first++ = *it;
        }
    }
    return first;
}