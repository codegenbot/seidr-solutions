#include <iostream>
#include <vector>
#include <string>
#include <cassert> // Include the <cassert> header

using namespace std;

vector<string> numerical_letter_grade(vector<float> grades);

bool issame(vector<string> a, vector<string> b); // Remove the redundant definition

vector<string> numerical_letter_grade(vector<float> grades){
    // Function implementation remains the same
}

bool issame(vector<string> a, vector<string> b){
    // Function implementation remains the same
}

int main(){
    assert (issame(numerical_letter_grade({0, 0.7}) , {"E", "D-"}));
    return 0;
}