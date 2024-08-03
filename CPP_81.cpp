```cpp
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float g : grades) {
        std::string grade;
        if (g >= 4.0)
            grade = "A+";
        else if (g > 3.7)
            grade = "A";
        else if (g > 3.3)
            grade = "A-";
        else if (g > 3.0)
            grade = "B+";
        else if (g > 2.7)
            grade = "B";
        else if (g > 2.3)
            grade = "B-";
        else if (g > 2.0)
            grade = "C+";
        else if (g > 1.7)
            grade = "C";
        else if (g > 1.3)
            grade = "C-";
        else if (g > 1.0)
            grade = "D+";
        else if (g > 0.7)
            grade = "D";
        else
            grade = "F";
        letter_grades.push_back(grade);
    }
    return letter_grades;
}

int main() {
    std::vector<float> grades = {0, 0.7};
    std::vector<std::string> result = numerical_letter_grade(grades);
    std::cout << "Letter Grades: ";
    for (const auto& grade : result) {
        std::cout << grade << " ";
    }
    std::cout << std::endl;
}