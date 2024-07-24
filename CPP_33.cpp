#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    // Function logic here
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    // Sort every third element of vector l
    vector<int> sorted_l = l;
    for (int i = 2; i < l.size(); i += 3) {
        sorted_l[i] = l[i];
    }
    sort(sorted_l.begin(), sorted_l.end());
    return sorted_l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}