#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(iterator start, iterator end) {
    unordered_set<int> set;
    for (auto it = start; it != end; ++it) {
        if (!set.insert(*it).second) {
            *it = 0; // replace with some dummy value
        }
    }
    return start + distance(start, find_if(start, end, [&set](int x){return set.count(x);})) - 1;
}