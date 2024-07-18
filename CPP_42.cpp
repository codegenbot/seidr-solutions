#include <vector>
#include <assert.h>

vector<int> incr_list(vector<int> l);

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> incr_list(vector<int> l) {
    for (int &num : l) {
        num++;
    }
    return l;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> l = {1, 2, 3};
    vector<int> l_inc = incr_list(l);
    vector<int> l_copy = {2, 3, 4};

    assert(issame(l_inc, l_copy));

    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));

    return 0;
}