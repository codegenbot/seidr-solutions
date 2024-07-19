vector<float> issame(vector<float> a, vector<float> b) {
    vector<float> l = a;
    vector<float> even_vals;
    vector<float> sorted_even_vals;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
            sorted_even_vals.push_back(l[i]);
        }
    }
    sort(sorted_even_vals.begin(), sorted_even_vals.end());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_vals[j];
            j++;
        }
    }
    return l;
}

void sort_even(vector<float>& l) {
    vector<float> even_vals;
    vector<float> sorted_even_vals;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
            sorted_even_vals.push_back(l[i]);
        }
    }
    sort(sorted_even_vals.begin(), sorted_even_vals.end());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_vals[j];
            j++;
        }
    }
}

int main() {
    // Main function code here
    return 0;
}