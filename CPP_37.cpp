#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float>& l);

int main() {
    vector<float> l = {3, 5, 1, 4, 2, 6};
    vector<float> sorted_l = {1, 4, 2, 5, 3, 6};
    sort_even(l);
    assert(issame(l, sorted_l));
    cout << "Sorted even indices match the expected result." << endl;
    return 0;
}

void sort_even(vector<float>& l) {
    vector<float> l_even;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
        }
    }
    sort(l_even.begin(), l_even.end());
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = l_even[j];
            ++j;
        }
    }
}