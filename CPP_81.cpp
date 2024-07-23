```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const string &s) {return find(b.begin(), b.end(), s) != b.end();});
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        string letter_grade = "";
        if (grade >= 4.0) {
            letter_grade = "A+";
        } else if (grade > 3.7) {
            letter_grade = "A";
        } else if (grade > 3.3) {
            letter_grade = "A-";
        } else if (grade > 3.0) {
            letter_grade = "B+";
        } else if (grade > 2.7) {
            letter_grade = "B";
        } else if (grade > 2.3) {
            letter_grade = "B-";
        } else if (grade > 2.0) {
            letter_grade = "C+";
        } else if (grade > 1.7) {
            letter_grade = "C";
        } else if (grade > 1.3) {
            letter_grade = "C-";
        } else if (grade > 1.0) {
            letter_grade = "D+";
        } else if (grade > 0.7) {
            letter_grade = "D";
        } else if (grade > 0.0) {
            letter_grade = "D-";
        } else {
            letter_grade = "E";
        }
        letter_grades.push_back(letter_grade);
    }
    return letter_grades;
}

int main() {
    vector<float> grades = {0, 0.7};
    assert (issame(numerical_letter_grade(grades) , {"E", "D-"}));
}