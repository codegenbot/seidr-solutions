bool issame(vector<float> a, vector<float> b) {
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
    
    int even_index = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = even_values[even_index];
            even_index++;
        }
    }
}

int main() {
    vector<float> l = {3.5, 2.0, 4.5, 1.0, 5.5};
    sort_even(l);
    
    for (int i = 0; i < l.size(); ++i) {
        cout << l[i] << " ";
    }
    
    return 0;
}