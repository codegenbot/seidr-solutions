vector<float> sort_even(vector<float> l){
    vector<float> result;
    vector<float> even_values;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
        result.push_back(l[i]);
    }
    
    sort(even_values.begin(), even_values.end());
    
    for (int i = 0, j = 0; i < result.size(); i += 2, j++) {
        result[i] = even_values[j];
    }
    
    return result;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

int main() {
    vector<float> l = {3.2, 1.5, 4.7, 2.9, 6.3};
    vector<float> expected = {1.5, 1.5, 2.9, 2.9, 4.7};
    
    vector<float> sorted = sort_even(l);
    
    assert(issame(sorted, expected));
    
    return 0;
}