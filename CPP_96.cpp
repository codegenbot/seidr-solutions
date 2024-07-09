bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> count_up_to(int n);

int main() {
    vector<int> expected_result = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    
    vector<int> result = count_up_to(101);
    
    if (issame(result, expected_result)) {
        for (int prime : result) {
            cout << prime << " ";
        }
    } else {
        cout << "Incorrect implementation";
    }
    
    return 0;
}