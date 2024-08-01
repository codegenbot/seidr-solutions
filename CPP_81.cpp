bool issame(vector<string> a, vector<string>b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

int main() {
    vector<float> grades = {4.2, 3.9, 3.5, 2.8, 1.7};
    vector<string> expected_output = {"A+", "A", "B-", "C", "D+"};

    if (issame(numerical_letter_grade(grades), expected_output))
        cout << "The output is as expected." << endl;
    else
        cout << "The output is not as expected." << endl;

    return 0;
}