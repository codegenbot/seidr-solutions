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
    return sortedList;
}

int main() {
    assert(issame(solve({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    return 0;
}