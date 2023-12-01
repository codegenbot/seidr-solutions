#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for(int i=0; i<grades.size(); i++){
        // Rest of the code
    }
    return letter_grades;
}

int main(){
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}