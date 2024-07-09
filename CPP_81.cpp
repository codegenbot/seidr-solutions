#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string letter_grade(float grade) {
    if (grade >= 4.0)
        return "A+";
    else if (grade > 3.7)
        return "A";
    else if (grade > 3.3)
        return "A-";
    else if (grade > 3.0)
        return "B+";
    else if (grade > 2.7)
        return "B";
    else if (grade > 2.3)
        return "B-";
    else if (grade > 2.0)
        return "C+";
    else if (grade > 1.7)
        return "C";
    else if (grade > 1.3)
        return "C-";
    else if (grade > 1.0)
        return "D+";
    else if (grade > 0.7)
        return "D";
    else
        return "F";
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
    for (float grade : grades) {
        result.push_back(letter_grade(grade));
    }
    return result;
}