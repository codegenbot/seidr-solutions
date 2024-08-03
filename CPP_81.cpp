#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for(float gpa : grades){
        // Existing implementation
    }
    return letter_grades;
}

int main() {
    assert(numerical_letter_grade({0, 0.7}) == vector<string>{"E", "D-"});
    return 0;
}