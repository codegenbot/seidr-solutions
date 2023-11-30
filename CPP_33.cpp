#include <vector>
#include <algorithm>

vector<int> sort_third(vector<int> l) {
    vector<int> l_sorted = l;
    for (int i = 0; i < l.size(); i += 3) {
        sort(l_sorted.begin() + i, l_sorted.begin() + i + 3);
    }
    return l_sorted;
}