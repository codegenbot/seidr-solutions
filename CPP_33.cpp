void sort_third(vector<int>& l) {
    for (int i = 0; i < l.size(); i += 3) {
        sort(l.begin() + i, l.begin() + i + 3);
    }
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

int main() {
    vector<int> l = {9, 2, 5, 3, 7, 1, 8, 6, 4};
    vector<int> result = l;
    
    sort_third(result);
    
    vector<int> expected = {5, 2, 9, 1, 3, 7, 4, 6, 8};
    
    if (issame(result, expected)) {
        cout << "Output is correct" << endl;
    } else {
        cout << "Output is incorrect" << endl;
    }
    
    return 0;
}