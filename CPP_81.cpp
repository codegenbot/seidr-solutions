#include <iostream>
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    
    for (float grade : grades) {
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
        
        letter_grades.push_back(letter_grade);
    }
    
    return letter_grades;
}

int main() {
    vector<float> grades = {4.0, 3.5, 1.7, 2.0, 3.3};
    vector<string> letterGrades = numerical_letter_grade(grades);
    
    for (string grade : letterGrades) {
        cout << grade << endl;
    }
    
    return 0;
}