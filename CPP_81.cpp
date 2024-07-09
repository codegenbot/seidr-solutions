#include <vector>
#include <string>

std::string numerical_letter_grade(std::vector<float> grades) {
    std::string grade = "";
    
    if(grades[1] >= 0.9) 
        grade = "A";
    else if(grades[1] >= 0.8)
        grade = "B";
    else if(grades[1] >= 0.7)
        grade = "D-";
    else if(grades[1] < 0.7 && grades[0] >= 0.6) 
        grade = "C+";
    else if(grades[1] < 0.7 && grades[0] >= 0.5) 
        grade = "D+";
    else if(grades[1] < 0.7 && grades[0] < 0.5) 
        grade = "E";
    
    return grade;
}

bool areSame(vector<string> a,vector<string>b){
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<float> grades = {0, 0.7};
    assert(areSame({numerical_letter_grade(grades)}, {"E", "D-"}));
    return 0;
}