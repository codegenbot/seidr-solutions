bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    vector<float> grades = {3.5, 4.2, 1.8};
    vector<string> letter_grades = numerical_letter_grade(grades);
    
    // Call the issame function
    bool result = issame(letter_grades, {"A", "A+", "E"});
    
    return 0;
}