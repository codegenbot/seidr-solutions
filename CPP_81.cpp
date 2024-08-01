#include <string>
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for (float grade : grades) {
        if (grade == 4.0) letter_grades.push_back("A+");
        else if (grade > 3.7) letter_grades.push_back("A");
        else if (grade > 3.3) letter_grades.push_back("A-");
        else if (grade > 3.0) letter_grades.push_back("B+");
        else if (grade > 2.7) letter_grades.push_back("B");
        else if (grade > 2.3) letter_grades.push_back("B-");
        else if (grade > 2.0) letter_grades.push_back("C+");
        else if (grade > 1.7) letter_grades.push_back("C");
        else if (grade > 1.3) letter_grades.push_back("C-");
        else if (grade > 1.0) letter_grades.push_back("D+");
        else if (grade > 0.7) letter_grades.push_back("D");
        else if (grade > 0.0) letter_grades.push_back("D-");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}

int main() {
    vector<float> test_grades{4.0, 3.7, 3.2, 2.8, 2.1, 1.1, 0.7, 0.3};
    vector<string> expected_grades{"A+", "A", "B", "B-", "C+", "D", "D-", "E"};
    vector<string> actual_grades = numerical_letter_grade(test_grades);
    assert(issame(actual_grades, expected_grades));
    return 0;
}