vector<int> sort_third(vector<int> l) {
    vector<int> res = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sort(res.begin() + i, res.begin() + i + 3);
        }
    }
    return res;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> input = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> sorted = sort_third(input);
    vector<int> expected = {7, 8, 9, 4, 5, 6, 1, 2, 3};
    
    if (issame(sorted, expected)) {
        cout << "Sorted correctly" << endl;
    } else {
        cout << "Sorting incorrect" << endl;
    }
    
    return 0;
}