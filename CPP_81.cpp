bool issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

int main() {
    vector<float> grades = {4.5, 3.8, 2.9};
    vector<string> letter_grades = numerical_letter_grade(grades);
    vector<string> expected_result = {"A+", "A", "B+"};
    if (issame(letter_grades, expected_result))
        cout << "Pass";
    else
        cout << "Fail";
    return 0;
}