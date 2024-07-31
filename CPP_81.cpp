#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> numerical_letter_grade(vector<float> grades);

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for(float gpa : grades){
        if(gpa == 4.0) letter_grades.push_back("A+");
        else if(gpa > 3.7) letter_grades.push_back("A");
        else if(gpa > 3.3) letter_grades.push_back("A-");
        else if(gpa > 3.0) letter_grades.push_back("B+");
        else if(gpa > 2.7) letter_grades.push_back("B");
        else if(gpa > 2.3) letter_grades.push_back("B-");
        else if(gpa > 2.0) letter_grades.push_back("C+");
        else if(gpa > 1.7) letter_grades.push_back("C");
        else if(gpa > 1.3) letter_grades.push_back("C-");
        else if(gpa > 1.0) letter_grades.push_back("D+");
        else if(gpa > 0.7) letter_grades.push_back("D");
        else if(gpa >= 0.0) letter_grades.push_back("D-");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}

int main() {
    // Testing the issame function
    vector<string> test1 = {"A", "B", "C"};
    vector<string> test2 = {"A", "B", "C"};
    assert(issame(test1, test2));

    // Testing the numerical_letter_grade function
    vector<float> grades = {3.8, 2.5, 4.0, 1.7};
    vector<string> result = numerical_letter_grade(grades);
    vector<string> expected = {"A", "C+", "A+", "C"};
    assert(issame(result, expected));

    return 0;
}