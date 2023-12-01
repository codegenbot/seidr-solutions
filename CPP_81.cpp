#include <iostream>
#include <vector>
#include <string>
#include <cassert> // Added library
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades);

bool issame(vector<string> a, vector<string> b);

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for(int i=0; i<grades.size(); i++){
        // Rest of the code
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(numerical_letter_grade({0, 0.7}) , {"E", "D-"})); // Added assert keyword
    return 0;
}