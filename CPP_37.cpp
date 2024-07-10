bool issame(vector<float>& a, vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float>& l) {
    vector<float> even_values;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    sort(even_values.begin(), even_values.end());
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = even_values[j];
            ++j;
        }
    }
}

int main() {
    vector<float> l = {3.2, 1.7, 4.5, 2.1, 5.6};
    vector<float> sorted_l = {1.7, 2.1, 3.2, 4.5, 5.6};

    sort_even(l);
    bool is_same_result = issame(l, sorted_l);
    
    return 0;
}