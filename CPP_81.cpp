#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    vector<float> grades = {0, 0.7};
    vector<string> letter_grades = numerical_letter_grade(grades);
    assert(issame(letter_grades, {"E", "D-" }));
    return 0;
}