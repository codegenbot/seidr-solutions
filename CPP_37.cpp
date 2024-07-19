bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> sort_even(vector<float> l) {
    vector<float> l_prime = l;
    vector<float> even_elements;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }
    sort(even_elements.begin(), even_elements.end());
    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_elements[j++];
        }
    }
    return l_prime;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}