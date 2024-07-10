vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> input = {3, 1, 2, 2, 3};
    vector<int> expected_output = {1, 2, 3};
    
    vector<int> result = remove_duplicates(input);
    
    if(issame(result, expected_output)) {
        cout << "Output matches expected result." << endl;
    } else {
        cout << "Output does not match expected result." << endl;
    }
    
    return 0;
}