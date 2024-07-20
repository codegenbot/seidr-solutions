void sort_third(vector<int>& l) {
    for (int i = 0; i < l.size(); i += 3) {
        sort(l.begin() + i, l.begin() + i + 3);
    }
}

bool issame(vector<int>& v1, vector<int>& v2) {
    return v1 == v2;
}

int main() {
    vector<int> l = {9, 7, 8, 6, 4, 5, 3, 1, 2};
    vector<int> result = l;
    sort_third(result);
    vector<int> expected = {8, 7, 9, 5, 4, 6, 2, 1, 3};
    bool same = issame(result, expected);
    return 0;
}