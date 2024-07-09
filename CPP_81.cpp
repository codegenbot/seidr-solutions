```cpp
#include <vector>
#include <string>

bool same(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        if (grade >= 4.0)
            letter_grades.push_back("A+");
        else if (grade > 3.7)
            letter_grades.push_back("A");
        else if (grade > 3.3)
            letter_grades.push_back("A-");
        else if (grade > 3.0)
            letter_grades.push_back("B+");
        else if (grade > 2.7)
            letter_grades.push_back("B");
        else if (grade > 2.3)
            letter_grades.push_back("B-");
        else if (grade > 2.0)
            letter_grades.push_back("C+");
        else if (grade > 1.7)
            letter_grades.push_back("C");
        else if (grade > 1.3)
            letter_grades.push_back("C-");
        else if (grade > 1.0)
            letter_grades.push_back("D+");
        else if (grade > 0.7)
            letter_grades.push_back("D");
        else
            letter_grades.push_back("F");
    }
    return letter_grades;
}

int main() {
    std::vector<float> grades = {0, 0.7};
    for (float &grade : grades) {
        if (grade >= 4.0)
            grade = "A+";
        else if (grade > 3.7)
            grade = "A";
        else if (grade > 3.3)
            grade = "A-";
        else if (grade > 3.0)
            grade = "B+";
        else if (grade > 2.7)
            grade = "B";
        else if (grade > 2.3)
            grade = "B-";
        else if (grade > 2.0)
            grade = "C+";
        else if (grade > 1.7)
            grade = "C";
        else if (grade > 1.3)
            grade = "C-";
        else if (grade > 1.0)
            grade = "D+";
        else if (grade > 0.7)
            grade = "D";
        else
            grade = "F";
    }
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        if (std::to_string(grade) == "4" || std::to_string(grade) == "3.7")
            letter_grades.push_back("A+");
        else if (std::to_string(grade) == "3.3" || std::to_string(grade) == "3.0")
            letter_grades.push_back("B+");
        else if (std::to_string(grade) == "2.7" || std::to_string(grade) == "2.0")
            letter_grades.push_back("C+");
        else if (std::to_string(grade) == "1.7" || std::to_string(grade) == "1.3")
            letter_grades.push_back("D+");
        else
            letter_grades.push_back("F");
    }
    assert(same(numerical_letter_grade({0, 0.7}), letter_grades));
    return 0;
}