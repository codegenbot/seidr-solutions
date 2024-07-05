#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> numerical_letter_grade(const vector<float>& grades) {
    vector<string> result;
    for (float gpa : grades) {
        if (gpa == 4.0) result.push_back("A+");
        else if (gpa > 3.7) result.push_back("A");
        else if (gpa > 3.3) result.push_back("A-");
        else if (gpa > 3.0) result.push_back("B+");
        else if (gpa > 2.7) result.push_back("B");
        else if (gpa > 2.3) result.push_back("B-");
        else if (gpa > 2.0) result.push_back("C+");
        else if (gpa > 1.7) result.push_back("C");
        else if (gpa > 1.3) result.push_back("C-");
        else if (gpa > 1.0) result.push_back("D+");
        else if (gpa > 0.7) result.push_back("D");
        else if (gpa > 0.0) result.push_back("D-");
        else result.push_back("E");
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    cout << "All tests passed!" << endl;
    return 0;
}