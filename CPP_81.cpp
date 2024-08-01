```
#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    return (s1.length() == s2.length()) && std::equal(s1.begin(), s1.end(), s2.begin());
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<string> result;
    for (float grade : grades) {
        string letterGrade = "";
        if (grade >= 4.0)
            letterGrade = "A+";
        else if (grade > 3.7)
            letterGrade = "A";
        else if (grade > 3.3)
            letterGrade = "A-";
        else if (grade > 3.0)
            letterGrade = "B+");
        else if (grade > 2.7)
            letterGrade = "B";
        else if (grade > 2.3)
            letterGrade = "B-";
        else if (grade > 2.0)
            letterGrade = "C+";
        else if (grade > 1.7)
            letterGrade = "C";
        else if (grade > 1.3)
            letterGrade = "C-";
        else if (grade > 1.0)
            letterGrade = "D+";
        else if (grade > 0.7)
            letterGrade = "D";
        else
            letterGrade = "E";
        result.push_back(letterGrade);
    }
    return result;
}

int main() {
    std::vector<float> grades = {3.8, 2.9, 4.1, 3.5};
    std::vector<std::string> output = numerical_letter_grade(grades);
    for (const auto& letter : output) {
        std::cout << letter << std::endl;
    }
    return 0;
}