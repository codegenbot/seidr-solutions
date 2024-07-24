#include <iostream>
#include <vector>
#include <string>

bool isSame(char c1, char c2) {
    return (c1 == 'A' && c2 == 'A') || 
           (c1 == 'B' && c2 == 'B') || 
           (c1 == 'C' && c2 == 'C') || 
           (c1 == 'D' && c2 == 'D') || 
           (c1 == 'E' && c2 == 'E');
}

string numericalLetterGrade(float grade) {
    if (grade >= 4.0) {
        return "A+";
    } else if (grade > 3.7) {
        return "A";
    } else if (grade > 3.3) {
        return "A-";
    } else if (grade > 3.0) {
        return "B+");
    } else if (grade > 2.7) {
        return "B";
    } else if (grade > 2.3) {
        return "B-";
    } else if (grade > 2.0) {
        return "C+";
    } else if (grade > 1.7) {
        return "C";
    } else if (grade > 1.3) {
        return "C-";
    } else if (grade > 1.0) {
        return "D+");
    } else if (grade > 0.7) {
        return "D";
    } else if (grade > 0.0) {
        return "D-";
    } else {
        return "E";
    }
}

vector<string> numericalLetterGrades(vector<float> grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        string letter_grade = numericalLetterGrade(grade);
        letter_grades.push_back(letter_grade);
    }
    return letter_grades;
}

int main() {
    // Your code here
    return 0;
}