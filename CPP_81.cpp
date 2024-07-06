```cpp
#include <initializer_list>
#include <vector>
#include <string>

bool std::equal(const std::vector<std::string>::const_iterator a_begin,
                const std::vector<std::string>::const_iterator a_end,
                const std::vector<std::string>::const_iterator b) {
    return a_end == std::unique_copy(a_begin, a_end, b, [](std::string s1, std::string s2){return s1==s2;});
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        if (grade >= 4.0) {
            letter_grades.push_back("A+");
        } else if (grade > 3.7) {
            letter_grades.push_back("A");
        } else if (grade > 3.3) {
            letter_grades.push_back("A-");
        } else if (grade > 3.0) {
            letter_grades.push_back("B+");
        } else if (grade > 2.7) {
            letter_grades.push_back("B");
        } else if (grade > 2.3) {
            letter_grades.push_back("B-");
        } else if (grade > 2.0) {
            letter_grades.push_back("C+");
        } else if (grade > 1.7) {
            letter_grades.push_back("C");
        } else if (grade > 1.3) {
            letter_grades.push_back("C-");
        } else if (grade > 1.0) {
            letter_grades.push_back("D+");
        } else if (grade > 0.7) {
            letter_grades.push_back("D");
        } else if (grade > 0.0) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("F");
        }
    }
    return letter_grades;
}