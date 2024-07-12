#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    unique_copy(l.begin(), l.end(), back_inserter(result));
    return result;
}

vector<int>::iterator unique_copy(vector<int>::iterator first, vector<int>::iterator last, vector<int>::iterator& result) {
    unordered_set<int> seen;
    for (auto it = first; it != last; ++it) {
        if (seen.insert(*it).second) {
            *result++ = *it;
        }
    }
    return --result;
}