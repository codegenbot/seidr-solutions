bool issame(vector<float> a, vector<float> b) {
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

// Usage example
vector<float> test = {2.5, 4.3, 1.2, 3.7, 5.5, 6.1};
vector<float> sorted_test = {1.2, 4.3, 2.5, 3.7, 5.5, 6.1};
sort_even(test);
assert(issame(test, sorted_test));