bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> common_elements(vector<int>& l1, vector<int>& l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> common_elements;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(common_elements));
    common_elements.erase(unique(common_elements.begin(), common_elements.end()), common_elements.end());
    return common_elements;
}

int main() {
    vector<int> common({4, 3, 2, 8});
    vector<int> empty;
    
    assert(issame(common, empty));
    
    return 0;
}