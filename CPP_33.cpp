#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> to_sort;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            to_sort.push_back(l[i]);
        }
    }
    sort(to_sort.begin(), to_sort.end());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l[i] = to_sort[j++];
        }
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    assert(issame(sort_third({0, 1, 2, 3, 4, 5, 6, 7, 8}), {0, 1, 2, 3, 4, 5, 6, 7, 8}));
    assert(issame(sort_third({9, 8, 7, 6, 5, 4, 3, 2, 1}), {3, 8, 7, 6, 5, 4, 9, 2, 1}));
    cout << "All test cases passed!" << endl;
    return 0;
}