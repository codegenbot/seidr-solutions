bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<float> grades = {4.2, 3.9, 3.5};
    vector<string> letter_grades = numerical_letter_grade(grades);
    
    // Testing the function
    vector<string> expected = {"A+", "A", "A-"};
    if (issame(letter_grades, expected)) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test failed." << endl;
    }
    
    return 0;
}