#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letterGrades;
    for (float grade : grades) {
        if (grade >= 4.0)
            letterGrades.push_back("A+");
        else if (grade > 3.7)
            letterGrades.push_back("A");
        else if (grade > 3.3)
            letterGrades.push_back("A-");
        else if (grade > 3.0)
            letterGrades.push_back("B+");
        else if (grade > 2.7)
            letterGrades.push_back("B");
        else if (grade > 2.3)
            letterGrades.push_back("B-");
        else if (grade > 2.0)
            letterGrades.push_back("C+");
        else if (grade > 1.7)
            letterGrades.push_back("C");
        else if (grade > 1.3)
            letterGrades.push_back("C-");
        else if (grade > 1.0)
            letterGrades.push_back("D+");
        else if (grade > 0.7)
            letterGrades.push_back("D");
        else
            letterGrades.push_back("E");
    }
    return letterGrades;
}

int main() {
    vector<float> grades = {4.0, 3.0, 1.7, 2.5, 3.5};
    vector<string> result = numerical_letter_grade(grades);
    for (string grade : result) {
        cout << grade << " ";
    }
    return 0;
}