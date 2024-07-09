```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::vector<std::string>> numerical_letter_grade(std::vector<std::vector<float>> grades) {
    vector<vector<string>> letter_grades;  // Initialize it here

    for (auto row : grades) {
        vector<string> letter_grade_row;
        float sum = 0.0f;
        for (float grade : row) {
            string letter_grade;
            if (grade >= 4.0)
                letter_grade = "A+";
            else if (grade > 3.7)
                letter_grade = "A";
            else if (grade > 3.3)
                letter_grade = "A-";
            else if (grade > 3.0)
                letter_grade = "B+";
            else if (grade > 2.7)
                letter_grade = "B";
            else if (grade > 2.3)
                letter_grade = "B-";
            else if (grade > 2.0)
                letter_grade = "C+";
            else if (grade > 1.7)
                letter_grade = "C";
            else if (grade > 1.3)
                letter_grade = "C-";
            else if (grade > 1.0)
                letter_grade = "D+";
            else if (grade > 0.7)
                letter_grade = "D";
            else
                letter_grade = "E";
            sum += grade;
        }
        for (float grade : row) {
            string letter_grade;
            if (grade >= 4.0)
                letter_grade = "A+";
            else if (grade > 3.7)
                letter_grade = "A";
            else if (grade > 3.3)
                letter_grade = "A-";
            else if (grade > 3.0)
                letter_grade = "B+";
            else if (grade > 2.7)
                letter_grade = "B";
            else if (grade > 2.3)
                letter_grade = "B-";
            else if (grade > 2.0)
                letter_grade = "C+";
            else if (grade > 1.7)
                letter_grade = "C";
            else if (grade > 1.3)
                letter_grade = "C-";
            else if (grade > 1.0)
                letter_grade = "D+";
            else if (grade > 0.7)
                letter_grade = "D";
            else
                letter_grade = "E";
            letter_grade_row.push_back(letter_grade);
        }
        letter_grades.push_back(letter_grade_row);
    }
    return letter_grades;
}