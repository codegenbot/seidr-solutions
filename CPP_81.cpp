vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letterGrades;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 4.0) {
            letterGrades.push_back("A+");
        } else if (grades[i] > 3.7) {
            letterGrades.push_back("A");
        } else if (grades[i] > 3.3) {
            letterGrades.push_back("A-");
        } else if (grades[i] > 3.0) {
            letterGrades.push_back("B+");
        } else if (grades[i] > 2.7) {
            letterGrades.push_back("B");
        } else if (grades[i] > 2.3) {
            letterGrades.push_back("B-");
        } else if (grades[i] > 2.0) {
            letterGrades.push_back("C+");
        } else if (grades[i] > 1.7) {
            letterGrades.push_back("C");
        } else if (grades[i] > 1.3) {
            letterGrades.push_back("C-");
        } else if (grades[i] > 1.0) {
            letterGrades.push_back("D+");
        } else if (grades[i] > 0.7) {
            letterGrades.push_back("D");
        } else if (grades[i] > 0.0) {
            letterGrades.push_back("D-");
        } else {
            letterGrades.push_back("E");
        }
    }
    return letterGrades;
}