bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float>& l) {
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
    vector<float> v = {4, 2, 1, 3};
    vector<float> v_sorted = {1, 2, 3, 4};

    sort_even(v);

    assert(issame(v, v_sorted));

    return 0;
}