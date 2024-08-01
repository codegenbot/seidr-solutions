#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> solve(const vector<int>& l) {
    vector<int> sortedList = l;
    sort(sortedList.begin(), sortedList.end());
    sortedList.erase(unique(sortedList.begin(), sortedList.end()), sortedList.end());
    assert(issame(unique(sortedList.begin(), sortedList.end()), l));
    return sortedList;
}