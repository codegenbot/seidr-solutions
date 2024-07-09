#include <vector>
#include <string>

bool issame(float a, float b) {
    return abs(a - b) <= 0.01;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
    for (float grade : grades) {
        string letterGrade = "";
        if (issame(grade, 4.0)) {
            letterGrade = "A+";
        } else if (issame(grade, 3.7)) {
            letterGrade = "A";
        } else if (issame(grade, 3.3)) {
            letterGrade = "A-";
        } else if (issame(grade, 3.0)) {
            letterGrade = "B+";
        } else if (issame(grade, 2.7)) {
            letterGrade = "B";
        } else if (issame(grade, 2.3)) {
            letterGrade = "B-";
        } else if (issame(grade, 2.0)) {
            letterGrade = "C+";
        } else if (issame(grade, 1.7)) {
            letterGrade = "C";
        } else if (issame(grade, 1.3)) {
            letterGrade = "C-";
        } else if (issame(grade, 1.0)) {
            letterGrade = "D+";
        } else if (issame(grade, 0.7)) {
            letterGrade = "D";
        } else {
            letterGrade = "E";
        }
        result.push_back(letterGrade);
    }
    return result;
}