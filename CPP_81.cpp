#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        if (gpa == 4.0) letter_grades.push_back("A+");
        else if (gpa > 3.7) letter_grades.push_back("A");
        else if (gpa > 3.3) letter_grades.push_back("A-");
        else if (gpa > 3.0) letter_grades.push_back("B+");
        else if (gpa > 2.7) letter_grades.push_back("B");
        else if (gpa > 2.3) letter_grades.push_back("B-");
        else if (gpa > 2.0) letter_grades.push_back("C+");
        else if (gpa > 1.7) letter_grades.push_back("C");
        else if (gpa > 1.3) letter_grades.push_back("C-");
        else if (gpa > 1.0) letter_grades.push_back("D+");
        else if (gpa > 0.7) letter_grades.push_back("D");
        else if (gpa > 0.0) letter_grades.push_back("D-");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    assert(issame(numerical_letter_grade({2.5, 3.9, 4.0}), {"C+", "A-", "A+"}));
    assert(issame(numerical_letter_grade({1.5, 2.0, 3.5}), {"D+", "C+", "A"}));
    assert(issame(numerical_letter_grade({3.7, 2.7, 1.3, 0}), {"A", "B", "C-", "E"}));
    
    return 0;
}