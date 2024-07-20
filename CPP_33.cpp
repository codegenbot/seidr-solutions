void sort_third(vector<int>& l) {
    for (int i = 0; i < l.size(); i += 3) {
        sort(l.begin() + i, l.begin() + i + 3);
    }
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

int main() {
    vector<int> l = {9, 1, 3, 6, 8, 2, 5, 4, 7};
    vector<int> result = l;
    
    sort_third(result);
    
    vector<int> expected = {3, 1, 9, 2, 6, 8, 4, 5, 7};
    
    if (issame(result, expected)) {
        cout << "Output is correct." << endl;
    } else {
        cout << "Output is incorrect." << endl;
    }
    
    return 0;
}