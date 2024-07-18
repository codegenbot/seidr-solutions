#include <string>
#include <cassert>

bool is_same(vector<float> expected, vector<float> actual){
    assert(expected.size() == actual.size());
    for(int i = 0; i < expected.size(); i++){
        if(expected[i] != actual[i]){
            return false;
        }
    }
    return true;
}

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

int main(){
    // Main function code here
    return 0;
}