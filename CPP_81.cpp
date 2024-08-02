bool issame(vector<string> vec1, vector<string> vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
}

int main() {
    vector<float> grades = {3.8, 4.2, 3.5, 2.9};
    vector<string> letter_grades = numerical_letter_grade(grades);
    
    // Example usage of the issame function
    vector<string> expected_grades = {"A", "A+", "A-", "C+"};
    if (issame(letter_grades, expected_grades)) {
        cout << "The grades are as expected." << endl;
    } else {
        cout << "The grades are not as expected." << endl;
    }
    
    return 0;
}