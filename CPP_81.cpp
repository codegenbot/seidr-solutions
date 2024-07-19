#pragma GCC diagnostic push
#include <vector>
#include <string>

#pragma GCC diagnostic pop

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letterGrades;
    for (const auto& grade : grades) {
        if (grade >= 4.0f)
            letterGrades.push_back("A");
        else if (grade >= 3.5f)
            letterGrades.push_back("B");
        else if (grade >= 3.0f)
            letterGrades.push_back("C");
        else if (grade >= 2.5f)
            letterGrades.push_back("D");
        else
            letterGrades.push_back("F");
    }
    return letterGrades;
}

int main() {
    std::vector<float> grades = {3.8f, 2.9f, 4.1f, 3.5f};
    std::vector<std::string> letterGrades = numerical_letter_grade(grades);

    for (const auto& grade : letterGrades) {
        std::cout << grade << " ";
    }
    return 0;
}