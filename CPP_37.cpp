#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

vector<float> sort_even(const vector<float>& l) {
    vector<float> even_values, sorted_even_values;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }
    sort(sorted_even_values.begin(), sorted_even_values.end());
    int sorted_index = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[sorted_index];
            sorted_index++;
        }
    }
    return l;
}