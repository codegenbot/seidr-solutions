#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letterGrades;
    for (float grade : grades) {
        if (grade >= 4.0)
            letterGrades.push_back("A+");
        else if (grade > 3.7)
            letterGrades.push_back("A");
        else if (grade > 3.3)
            letterGrades.push_back("A-");
        else if (grade > 3.0)
            letterGrades.push_back("B+");
        else if (grade > 2.7)
            letterGrades.push_back("B");
        else if (grade > 2.3)
            letterGrades.push_back("B-");
        else if (grade > 2.0)
            letterGrades.push_back("C+");
        else if (grade > 1.7)
            letterGrades.push_back("C");
        else if (grade > 1.3)
            letterGrades.push_back("C-");
        else if (grade > 1.0)
            letterGrades.push_back("D+");
        else if (grade > 0.7)
            letterGrades.push_back("D");
        else
            letterGrades.push_back("E");
    }
    return letterGrades;
}