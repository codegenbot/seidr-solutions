```cpp
#include <vector>
#include <string>

bool issame(std::string s1, std::string s2) {
    if(s1.size() != s2.size()) return false;
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        std::string letterGrade = "";
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
    std::vector<float> grades = {3.8, 2.9, 4.1};
    std::vector<std::string> result = numerical_letter_grade(grades);
    for(std::string s : result) {
        if(!issame(s, "A+")) {
            std::cout << s << std::endl;
        }
    }
    return 0;
}