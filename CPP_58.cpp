#include <vector>
#include <algorithm>

vector<int> b(const vector<int>& l1, const vector<int>& l2) {
    vector<int> l1_copy = l1;
    vector<int> l2_copy = l2;
    
    sort(l1_copy.begin(), l1_copy.end());
    sort(l2_copy.begin(), l2_copy.end());

    vector<int> result;
    set_intersection(l1_copy.begin(), l1_copy.end(), l2_copy.begin(), l2_copy.end(), back_inserter(result));

    auto last = unique(result.begin(), result.end());
    result.erase(last, result.end());

    return result;
}