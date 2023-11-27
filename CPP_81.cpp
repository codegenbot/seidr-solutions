#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for(int i=0; i<grades.size(); i++){
        if(grades[i] >= 4.0){
            letter_grades.push_back("A+");
        }
        else if(grades[i] > 3.7){
            letter_grades.push_back("A");
        }
        // ... Other grade conditions ...
        else{
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b){
    return std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
}