#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float> &l) {
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
}

int main() {
    vector<float> values = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(values);
    vector<float> expected_output = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    assert(issame(values, expected_output));
    return 0;
}