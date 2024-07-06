#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<int> scores){
    std::vector<std::string> grades;
    for(int i=0; i<scores.size(); i++){
        int score = scores[i];
        if(score < 60)
            grades.push_back("F");
        else if(score >= 90) 
            grades.push_back("A");
        else if(score >=80)
            grades.push_back("B");
        else if(score >=70) 
            grades.push_back("C");
        else
            grades.push_back("D");
    }
    return grades;
}

int main() {
    std::vector<int> scores = {0, 0.7};
    std::vector<std::string> grades = {"E", "D-" };
    assert(issame(numerical_letter_grade(scores), grades));
    return 0;
}