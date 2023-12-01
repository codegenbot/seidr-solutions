#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    // your implementation here
}

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    int i = 0;
    int j = 0;
    
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            i++;
        } else if (l1[i] > l2[j]) {
            j++;
        } else {
            if (result.empty() || result.back() != l1[i]) {
                result.push_back(l1[i]);
            }
            i++;
            j++;
        }
    }
    
    return result;
}

int main() {
    assert(common({4, 3, 2, 8}, {}) == {});
    // more asserts here
    
    return 0;
}