#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> sort_even(vector<float> l);

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}

vector<float> sort_even(vector<float> l) {
    vector<float> even_vals;
    vector<float> sorted_even_vals;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
            sorted_even_vals.push_back(l[i]);
        }
    }
    sort(sorted_even_vals.begin(), sorted_even_vals.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_vals[sorted_even_index];
            sorted_even_index++;
        }
    }
    return l;
}