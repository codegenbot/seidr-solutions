bool issame(const vector<float> &a, const vector<float> &b) {
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

void sort_even(vector<float> &l) {
    vector<float> even_elements;
    vector<float> sorted_even_elements;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
            sorted_even_elements.push_back(l[i]);
        }
    }
    sort(sorted_even_elements.begin(), sorted_even_elements.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_elements[sorted_even_index];
            sorted_even_index++;
        }
    }
}

int main() {
    // Code provided in the problem, calling sort_even function
    // Assert statement
    return 0;
}