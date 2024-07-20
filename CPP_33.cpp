void sort_third(vector<int>& v) {
    for (int i = 0; i < v.size(); i += 3) {
        sort(v.begin() + i, v.begin() + i + 3);
    }
}

bool issame(vector<int>& v1, vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> result = l;
    sort_third(result);
    
    vector<int> expected_result = l;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            sort(expected_result.begin() + i, expected_result.begin() + i + 3);
        }
    }
    
    if (issame(result, expected_result)) {
        cout << "Output matches expected result." << endl;
    } else {
        cout << "Output does not match expected result." << endl;
    }
    return 0;
}