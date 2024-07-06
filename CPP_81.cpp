```cpp
#include <vector>
#include <string>

double convertToGrade(int score) {
    if (score >= 90)
        return 4.0;
    else if (score >= 80)
        return 3.7;
    else if (score >= 77)
        return 3.3;
    else if (score >= 73)
        return 3.0;
    else if (score >= 70)
        return 2.7;
    else if (score >= 67)
        return 2.3;
    else if (score >= 63)
        return 2.0;
    else if (score >= 60)
        return 1.7;
    else
        return 0.0;
}

vector<string> numerical_letter_grade(vector<double> scores) {
    vector<string> letter_grades;
    for (double score : scores) {
        double grade = convertToGrade((int)(score * 10));
        if (grade == 4.0)
            letter_grades.push_back("A");
        else if (grade >= 3.7)
            letter_grades.push_back("A-");
        else if (grade >= 3.3)
            letter_grades.push_back("B+");
        else if (grade >= 3.0)
            letter_grades.push_back("B");
        else if (grade >= 2.7)
            letter_grades.push_back("B-");
        else if (grade >= 2.3)
            letter_grades.push_back("C+");
        else if (grade >= 2.0)
            letter_grades.push_back("C");
        else if (grade >= 1.7)
            letter_grades.push_back("D+");
        else
            letter_grades.push_back("F");
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}) , {"E", "D-"}));
    // Add more code here...
}