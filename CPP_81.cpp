int main() {
    vector<float> grades = {3.4, 4.1, 2.9};
    vector<string> grades_letter = numerical_letter_grade(grades);

    if (issame(grades_letter, numerical_letter_grade(grades)))
        cout << "Grades are same." << endl;
    else
        cout << "Grades are not the same." << endl;

    return 0;
}