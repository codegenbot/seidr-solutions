```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool same(const vector<string>& vec1, const vector<string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
}

vector<string> numerical_letter_grade(const vector<float>& grades) {
    vector<string> result;
    for (float grade : grades) {
        string letterGrade;
        if (grade >= 4.0)
            letterGrade = "A+";
        else if (grade > 3.7)
            letterGrade = "A";
        else if (grade > 3.3)
            letterGrade = "A-";
        else if (grade > 3.0)
            letterGrade = "B+";
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
            letterGrade = "F";
        result.push_back(letterGrade);
    }
    return result;
}

int main() {
    vector<float> grades = {3.8, 2.9, 4.1, 3.5};
    vector<string> letterGrades = numerical_letter_grade(grades);
    
    for (const auto& grade : letterGrades) {
        cout << grade << " ";
    }
    return 0;
}