#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
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
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

int main() {
    std::vector<float> input = {0, 0.7};
    std::vector<std::string> expectedOutput = {"E", "D-"};

    if (!issame(numerical_letter_grade(input), expectedOutput)) {
        std::cout << "Error: Expected output is not matching with the actual one." << std::endl;
        return 1;
    }

    return 0;
}