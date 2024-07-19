```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isSame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        string strGrade;
        if (grade >= 4.0)
            strGrade = "A+";
        else if (grade > 3.7)
            strGrade = "A";
        else if (grade > 3.3)
            strGrade = "A-";
        else if (grade > 3.0)
            strGrade = "B+";
        else if (grade > 2.7)
            strGrade = "B";
        else if (grade > 2.3)
            strGrade = "B-";
        else if (grade > 2.0)
            strGrade = "C+";
        else if (grade > 1.7)
            strGrade = "C";
        else if (grade > 1.3)
            strGrade = "C-";
        else if (grade > 1.0)
            strGrade = "D+";
        else if (grade > 0.7)
            strGrade = "D";
        else
            strGrade = "F";
        letter_grades.push_back(strGrade);
    }
    return letter_grades;
}

int main() {
    vector<float> grades;
    cout << "Enter grades: ";
    float grade;
    while (cin >> grade) {
        grades.push_back(grade);
    }
    
    if (grades.size() == 0) {
        cout << "No grades entered." << endl;
    } else {
        vector<string> result = numerical_letter_grade(grades);
        for (int i = 0; i < result.size(); ++i) {
            cout << "Grade " << i+1 << ": " << result[i] << endl;
        }
    }
    return 0;
}