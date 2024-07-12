```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> result;
    for(int i = 0; i < grades.size(); i++){
        string letterGrade;
        if(grades[i] >= 4.0) {
            letterGrade = "A+";
        } else if(grades[i] > 3.7) {
            letterGrade = "A";
        } else if(grades[i] > 3.3) {
            letterGrade = "A-";
        } else if(grades[i] > 3.0) {
            letterGrade = "B+";
        } else if(grades[i] > 2.7) {
            letterGrade = "B";
        } else if(grades[i] > 2.3) {
            letterGrade = "B-";
        } else if(grades[i] > 2.0) {
            letterGrade = "C+";
        } else if(grades[i] > 1.7) {
            letterGrade = "C";
        } else if(grades[i] > 1.3) {
            letterGrade = "C-";
        } else if(grades[i] > 1.0) {
            letterGrade = "D+";
        } else if(grades[i] > 0.7) {
            letterGrade = "D";
        } else if(grades[i] > 0.0) {
            letterGrade = "D-";
        } else {
            letterGrade = "F";
        }
        result.push_back(letterGrade);
    }
    return result;
}

int main() {
    vector<float> grades = {3.4, 4.1, 2.9};
    vector<string> grades_letter = numerical_letter_grade(grades);

    if(issame(numerical_letter_grade(grades), grades_letter))
        cout << "Grades are same." << endl;
    else
        cout << "Grades are not the same." << endl;

    return 0;