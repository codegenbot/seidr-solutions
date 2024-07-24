bool issame(float f1, float f2) {
    if (abs(f1 - f2) < 0.01) {
        return true;
    }
    return false;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        if (issame(grade, 4.0)) {
            letter_grades.push_back("A+");
        } else if (issame(grade, 3.7)) {
            letter_grades.push_back("A");
        } else if (issame(grade, 3.3)) {
            letter_grades.push_back("A-");
        } else if (issame(grade, 3.0)) {
            letter_grades.push_back("B+");
        } else if (issame(grade, 2.7)) {
            letter_grades.push_back("B");
        } else if (issame(grade, 2.3)) {
            letter_grades.push_back("B-");
        } else if (issame(grade, 2.0)) {
            letter_grades.push_back("C+");
        } else if (issame(grade, 1.7)) {
            letter_grades.push_back("C");
        } else if (issame(grade, 1.3)) {
            letter_grades.push_back("C-");
        } else if (issame(grade, 1.0)) {
            letter_grades.push_back("D+");
        } else if (issame(grade, 0.7)) {
            letter_grades.push_back("D");
        } else if (issame(grade, 0.0)) {
            letter_grades.push_back("E");
        } else {
            letter_grades.push_back("F");
        }
    }
    return letter_grades;
}