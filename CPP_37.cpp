bool issame(vector<float> a, vector<float> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float>& l) {
    vector<float> even_elements;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }
    sort(even_elements.begin(), even_elements.end());

    vector<float> l_prime = l;
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_elements[even_index];
            even_index++;
        }
    }
    l = l_prime;
}

// Usage:
vector<float> v = {3, 1, 4, 1, 5, 9};
sort_even(v);