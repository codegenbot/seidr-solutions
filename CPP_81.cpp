bool issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    vector<float> grades = {4.0, 3.9, 3.5, 2.8};
    vector<string> letter_grades = numerical_letter_grade(grades);
    
    vector<string> expected = {"A+", "A", "A-", "B+"};
    
    if (issame(letter_grades, expected)) {
        cout << "The grades are correct." << endl;
    } else {
        cout << "The grades are not correct." << endl;
    }
    
    return 0;
}