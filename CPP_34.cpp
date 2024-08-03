#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(iterator start, iterator end) {
    unordered_set<int> set(start, end);
    for (auto it = start; it != end; ++it) {
        if (!set.count(*it)) {
            *it = numeric_limits<int>::max();
        }
    }
    return remove_if(start, end, [this](int i) { return i == numeric_limits<int>::max(); });
}