bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<float> grades = {4.2, 3.8, 3.5, 2.9};
    vector<string> letter_grades = numerical_letter_grade(grades);
    
    vector<string> expected = {"A+", "A", "A-", "B+"};
    if (issame(letter_grades, expected)) {
        cout << "Test passed";
    } else {
        cout << "Test failed";
    }
    
    return 0;
}