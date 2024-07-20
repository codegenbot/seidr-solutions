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
    vector<int> expected = {2, 1, 3, 5, 4, 6, 8, 7, 9}; // Example expected output
    if (issame(result, expected)) {
        cout << "Output is correct" << endl;
    } else {
        cout << "Output is incorrect" << endl;
    }
    return 0;
}