bool issame(float a, float b) {
    if (abs(a - b) < 0.01)
        return true;
    else
        return false;
}

int main() {
    vector<float> grades = {3.85, 2.95, 4.1};
    vector<string> result = numerical_letter_grade(grades);
    for (string grade : result) {
        cout << grade << endl;
    }
    return 0;
}