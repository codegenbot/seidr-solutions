#include <iostream>
#include <vector>
using namespace std;

bool issame(float a, float b) {
    if (abs(a - b) < 0.01)
        return true;
    else
        return false;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
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
    vector<float> grades;
    float grade;
    cout << "Enter the number of students: ";
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Enter student's grade: ";
        cin >> grade;
        grades.push_back(grade);
    }
    vector<string> letterGrades = numerical_letter_grade(grades);
    for (string s : letterGrades) {
        cout << s << endl;
    }
    return 0;
}