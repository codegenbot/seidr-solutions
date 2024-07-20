void sort_third(vector<int>& v) {
    for (int i = 0; i < v.size(); i += 3) {
        sort(v.begin() + i, v.begin() + i + 3);
    }
}

bool issame(vector<int>& v1, vector<int>& v2) {
    return v1 == v2;
}

int main() {
    vector<int> result = l;
    sort_third(result);
    vector<int> expected = {3, 4, 5, 0, 1, 2, 6, 7, 8};
    if (issame(result, expected)) {
        cout << "Output is correct!" << endl;
    } else {
        cout << "Output is incorrect!" << endl;
    }
}