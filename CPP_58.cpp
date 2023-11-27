#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2);

bool issame(vector<int> a, vector<int> b);

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    assert(issame(common({1, 2, 3, 4}, {3, 4, 5, 6}), {3, 4}));
    assert(issame(common({1, 1, 2, 3, 3}, {3, 3, 4, 4, 5}), {3}));
    assert(issame(common({1, 2, 3, 4}, {5, 6, 7, 8}), {}));
    
    return 0;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    int i = 0, j = 0;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] == l2[j]) {
            if (result.empty() || result.back() != l1[i]) {
                result.push_back(l1[i]);
            }
            i++;
            j++;
        } else if (l1[i] < l2[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}