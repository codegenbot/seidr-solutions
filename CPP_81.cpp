```
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::vector<std::string>> numerical_letter_grade(std::vector<std::vector<float>> grades) {
    std::vector<std::vector<std::string>> letter_grades;  // Initialize it here

    for (auto& g : grades) {
        std::vector<std::string> letter_grade;
        float total = 0.0;
        for (float grade : g) {
            total += grade;
        }
        string letter_grade_str;
        if (total / g.size() >= 4.0)
            letter_grade_str = "A+";
        else if (total / g.size() > 3.7)
            letter_grade_str = "A";
        else if (total / g.size() > 3.3)
            letter_grade_str = "A-";
        else if (total / g.size() > 3.0)
            letter_grade_str = "B+";
        else if (total / g.size() > 2.7)
            letter_grade_str = "B";
        else if (total / g.size() > 2.3)
            letter_grade_str = "B-";
        else if (total / g.size() > 2.0)
            letter_grade_str = "C+";
        else if (total / g.size() > 1.7)
            letter_grade_str = "C";
        else if (total / g.size() > 1.3)
            letter_grade_str = "C-";
        else if (total / g.size() > 1.0)
            letter_grade_str = "D+";
        else if (total / g.size() > 0.7)
            letter_grade_str = "D";
        else
            letter_grade_str = "E";
        letter_grade.push_back(letter_grade_str);
    }
    return letter_grades;
}