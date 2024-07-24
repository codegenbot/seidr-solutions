bool issame(const float& a, const float& b) {
    return fabs(a - b) < 0.00001;
}

void sort_even(vector<float>& l) {
    vector<float> even_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }
    sort(even_indices.begin(), even_indices.end());

    vector<float> result;
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_indices[even_index];
            even_index++;
        }
    }
}

int main() {
    // Function implementation here
}