bool issame(vector<string> v1, vector<string> v2) {
    if(v1.size() != v2.size())
        return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    return true;
}

int main() {
    vector<float> grades = {3.5, 4.0, 3.8};
    vector<string> letter_grades = numerical_letter_grade(grades);
    vector<string> expected = {"B+", "A+", "A"};
    if(issame(letter_grades, expected))
        cout << "Test passed";
    else
        cout << "Test failed";
    return 0;
}