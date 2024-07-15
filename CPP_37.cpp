#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> sort_even(vector<float> l);

vector<float> sort_even(vector<float> l) {
    vector<float> even_values;
    vector<float> result = l;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = even_values[even_index];
            even_index++;
        }
    }

    return result;
}

int main() {
    // Add test cases here if needed
    return 0;
}