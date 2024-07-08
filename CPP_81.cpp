```
#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
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

vector<string> numericalLetterGrade(vector<float> grades) {
    vector<string> letterGrades;
    for (float grade : grades) {
        string letterGrade;
        if (grade >= 4.0) {
            letterGrade = "A+";
        } else if (grade > 3.7) {
            letterGrade = "A";
        } else if (grade > 3.3) {
            letterGrade = "A-";
        } else if (grade > 3.0) {
            letterGrade = "B+";
        } else if (grade > 2.7) {
            letterGrade = "B";
        } else if (grade > 2.3) {
            letterGrade = "B-";
        } else if (grade > 2.0) {
            letterGrade = "C+";
        } else if (grade > 1.7) {
            letterGrade = "C";
        } else if (grade > 1.3) {
            letterGrade = "C-";
        } else if (grade > 1.0) {
            letterGrade = "D+";
        } else if (grade > 0.7) {
            letterGrade = "D";
        } else {
            letterGrade = "F";
        }
        letterGrades.push_back(letterGrade);
    }
    return letterGrades;
}

int main() {
    vector<float> grades = {0.0, 0.7};
    if (isSame(numericalLetterGrade(grades), vector<string> {"E", "D-" })) {
        cout << "The same" << endl;
    } else {
        cout << "Not the same" << endl;
    }
    return 0;
}