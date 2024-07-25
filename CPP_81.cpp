#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return isSameOrder(a) && isSameOrder(b);
}

std::vector<std::string> isSameOrder(std::vector<std::string> v) {
    sort(v.begin(), v.end());
    return v;
}

std::vector<string> numerical_letter_grade(vector<float> grades) {
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
            letter_grade = "B+");
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
            letter_grade = "E";
        }
        letter_grades.push_back(letter_grade);
    }
    return letter_grades;
}

int main() {
    vector<float> grades = {0.0f, 0.7f};
    vector<string> result = numerical_letter_grade(grades);
    assert(issame(result, {"E", "D-"}));
}