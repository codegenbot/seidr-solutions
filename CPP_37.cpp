#include <vector>

void sort_even(vector<float>& l);

bool issame(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float>& l) {
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
    vector<float> test1 = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(test1);
    assert(issame(test1, { -12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}