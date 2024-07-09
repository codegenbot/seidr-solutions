#include <vector>
#include <string>

bool checkIfSame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;

    for (float grade : grades) {
        int whole_grade = static_cast<int>(grade);
        if (whole_grade >= 4)
            letter_grades.push_back("A+");
        else if (whole_grade > 3)
            letter_grades.push_back("A");
        else if (whole_grade > 2)
            letter_grades.push_back("B+");
        else if (whole_grade > 1)
            letter_grades.push_back("C+");
        else if (whole_grade > 0)
            letter_grades.push_back("D+");
        else
            letter_grades.push_back("F");
    }
    return letter_grades;
}

int main() {
    assert(checkIfSame(numerical_letter_grade({0.7}), {"D-"}));
    return 0;
}