```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::vector<std::string>> numerical_letter_grade(std::vector<std::vector<float>> grades) {
    std::vector<std::vector<string>> letter_grades;  // Initialize it here

    for (auto& grade : grades) {
        vector<string> letter_grade;
        string letter_grade_str;
        float total = 0.0, count = 0.0;
        for (float g : grade) {
            total += g;
            count++;
        }
        float average = total / count;

        if (average >= 4.0)
            letter_grade_str = "A+";
        else if (average > 3.7)
            letter_grade_str = "A";
        else if (average > 3.3)
            letter_grade_str = "A-";
        else if (average > 3.0)
            letter_grade_str = "B+";
        else if (average > 2.7)
            letter_grade_str = "B";
        else if (average > 2.3)
            letter_grade_str = "B-";
        else if (average > 2.0)
            letter_grade_str = "C+";
        else if (average > 1.7)
            letter_grade_str = "C";
        else if (average > 1.3)
            letter_grade_str = "C-";
        else if (average > 1.0)
            letter_grade_str = "D+";
        else if (average > 0.7)
            letter_grade_str = "D";
        else
            letter_grade_str = "E";

        letter_grade.push_back(letter_grade_str);
    }
    letter_grades.push_back(letter_grade);
    return letter_grades;
}