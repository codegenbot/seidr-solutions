bool issame(float f1, float f2) {
    if (abs(f1 - f2) < 0.00001)
        return true;
    else
        return false;
}

int main() {
    vector<float> grades = {3.5, 4.0, 2.8};
    vector<string> result = numerical_letter_grade(grades);
    for (string grade : result) {
        cout << grade << endl;
    }
    return 0;
}