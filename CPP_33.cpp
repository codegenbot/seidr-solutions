bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

void sort_third(vector<int>& l_copy, int i){
    sort(l_copy.begin() + i - 2, l_copy.begin() + i + 1);
}

vector<int> taskFunction(vector<int> l) {
    vector<int> l_copy = l;
    for (int i = 0; i < l.size(); ++i){
        if ((i + 1) % 3 == 0){
            sort_third(l_copy, i);
        }
    }
    return l_copy;
}