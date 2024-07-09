```
#include <vector>
#include <string>

bool checkIfSame(std::vector<std::string> a, std::vector<std::string> b) {
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
    for (float grade : grades) {
        if (grade >= 4.0)
            std::cout << "A+ ";
        else if (grade > 3.7)
            std::cout << "A ";
        else if (grade > 3.3)
            std::cout << "A- ";
        else if (grade > 3.0)
            std::cout << "B+ ";
        else if (grade > 2.7)
            std::cout << "B ";
        else if (grade > 2.3)
            std::cout << "B- ";
        else if (grade > 2.0)
            std::cout << "C+ ";
        else if (grade > 1.7)
            std::cout << "C ";
        else if (grade > 1.3)
            std::cout << "C- ";
        else if (grade > 1.0)
            std::cout << "D+ ";
        else if (grade > 0.7)
            std::cout << "D ";
        else
            std::cout << "F ";
    }
    std::cout << std::endl;
    assert(checkIfSame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}