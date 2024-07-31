#include <vector>
#include <algorithm>
#include <cassert>

vector<float> sort_even(vector<float> l) {
    vector<float> even_values;
    vector<float> sorted_even_values;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }
    
    sort(sorted_even_values.begin(), sorted_even_values.end());
    
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[sorted_even_index];
            sorted_even_index++;
        }
    }
    
    return l;
}

bool issame(vector<float> v1, vector<float> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    
    for (size_t i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}