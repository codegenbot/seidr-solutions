#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        string letter_grade;
        if (grade >= 4.0) {
            letter_grade = "A+";
        } else if (grade > 3.7) {
            letter_grade = "A";
        } else if (grade > 3.3) {
            letter_grade = "A-";
        } else if (grade > 3.0) {
            letter_grade = "B+";
        } else if (grade > 2.7) {
            letter_grade = "B";
        } else if (grade > 2.3) {
            letter_grade = "B-";
        } else if (grade > 2.0) {
            letter_grade = "C+";
        } else if (grade > 1.7) {
            letter_grade = "C";
        } else if (grade > 1.3) {
            letter_grade = "C-";
        } else if (grade > 1.0) {
            letter_grade = "D+";
        } else if (grade > 0.7) {
            letter_grade = "D";
        } else {
            letter_grade = "F";
        }
        letter_grades.push_back(letter_grade);
    }
    return letter_grades;
}

int main() {
    vector<float> grades = {3.8, 2.5};
    assert(issame(numerical_letter_grade(grades), vector<string>{ "A", "C-" }) );
    return 0;
}