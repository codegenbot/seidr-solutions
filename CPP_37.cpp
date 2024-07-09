```cpp
bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    vector<float> even_elements;
    
    for(int i = 0; i < l.size(); i++) {
        if(i % 2 == 0) {
            even_elements.push_back(l[i]);
        } else {
            result[i] = l[i];
        }
    }
    
    sort(even_elements.begin(), even_elements.end());
    
    int j = 0;
    for(int i = 0; i < l.size(); i++) {
        if(i % 2 == 0) {
            result[i] = even_elements[j++];
        } else {
            result[i] = l[i];
        }
    }
    
    return result;
}