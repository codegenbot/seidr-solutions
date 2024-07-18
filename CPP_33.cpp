#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> sort_third(vector<int> l);

vector<int> sort_third(vector<int> l) {
    vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(l[i]);
        }
    }
    sort(sorted_indices.begin(), sorted_indices.end());

    int sorted_idx = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l[i] = sorted_indices[sorted_idx++];
        }
    }
    
    return l;
}

int main() {
    vector<int> input = {7, 2, 8, 5, 1, 3, 4, 6, 9};
    vector<int> expected_output = {1, 2, 3, 5, 7, 6, 4, 8, 9};
    vector<int> result = sort_third(input);
    assert(issame(result, expected_output));
    
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));

    return 0;
}