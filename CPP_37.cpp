#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

void sort_even(vector<float>& l) {
    vector<float> even_values;

    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_values[even_index++];
        }
    }
}

vector<float> sort_even_elements(const vector<float>& l) {
    vector<float> sorted_list = l;
    sort_even(sorted_list);
    return sorted_list;
}

int main() {
    assert(issame(sort_even_elements({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}),
                  {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    cout << "Test passed successfully!" << endl;
    return 0;
}