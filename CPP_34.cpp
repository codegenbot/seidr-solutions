#include <vector>
#include <algorithm>
#include <cassert>

using std::vector;
using std::unique;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> solve(const std::vector<int>& l) {
    std::vector<int> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
    sortedList.erase(unique(sortedList.begin(), sortedList.end()), sortedList.end());
    assert(issame(sortedList, l));
    return sortedList;
}