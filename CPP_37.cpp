#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

vector<float> sort_even(const vector<float>& l) {
    vector<float> l_odd, l_even_sorted;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_even_sorted.push_back(l[i]);
        } else {
            l_odd.push_back(l[i]);
        }
    }
    
    sort(l_even_sorted.begin(), l_even_sorted.end());
    
    vector<float> result;
    
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(l_even_sorted[j++]);
        } else {
            result.push_back(l_odd[i / 2]);
        }
    }
    
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    
    return 0;
}