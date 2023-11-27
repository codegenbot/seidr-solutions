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
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<float> l = {1.5, 2.3, 3.7, 4.2, 5.1, 6.6};
    vector<float> sorted_l = sort_even(l);
    vector<float> expected_sorted_l = {1.5, 2.3, 3.7, 4.2, 5.1, 6.6};
    
    assert(issame(sorted_l, expected_sorted_l));
    
    return 0;
}