#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> third_indices_values;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            third_indices_values.push_back(l[i]);
        }
    }
    sort(third_indices_values.begin(), third_indices_values.end());
    int j = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l[i] = third_indices_values[j++];
        }
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}) , {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}