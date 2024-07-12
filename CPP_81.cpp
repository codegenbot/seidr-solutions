#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string>b){
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
    for(float g : grades) {
        string letterGrade;
        if(g >= 4.0) {
            letterGrade = "A+";
        } else if(g > 3.7) {
            letterGrade = "A";
        } else if(g > 3.3) {
            letterGrade = "A-";
        } else if(g > 3.0) {
            letterGrade = "B+";
        } else if(g > 2.7) {
            letterGrade = "B";
        } else if(g > 2.3) {
            letterGrade = "B-";
        } else if(g > 2.0) {
            letterGrade = "C+";
        } else if(g > 1.7) {
            letterGrade = "C";
        } else if(g > 1.3) {
            letterGrade = "C-";
        } else if(g > 1.0) {
            letterGrade = "D+";
        } else if(g > 0.7) {
            letterGrade = "D";
        } else if(g > 0.0) {
            letterGrade = "D-";
        } else {
            letterGrade = "E";
        }
        result.push_back(letterGrade);
    }
    return result;
}

int main() {
    vector<float> grades = {3.8, 4.2, 1.9};
    vector<string> gradeLetters = numerical_letter_grade(grades);
    
    if (issame({"A+", "A+", "D-"}, gradeLetters)) {
        cout << "Grades are same." << endl;
    } else {
        cout << "Grades are different." << endl;
    }
    
    return 0;
}