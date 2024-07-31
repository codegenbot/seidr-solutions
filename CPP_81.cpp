#include <vector>
#include <string>

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
        else if (gpa >= 0.0) letter_grades.push_back("D-");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b) {
    // Implementation of issame function
    // You need to implement this function to check if both vectors 'a' and 'b' are the same
}

int main() {
    // Your main function code
}