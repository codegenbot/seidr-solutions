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

std::vector<std::string> numerical_letter_grade(const std::vector<int>& scores) {
    std::vector<std::string> grades;
    
    for(auto score : scores){
        if(score >= 90.0) 
            grades.push_back("A");
        else if(score >= 80.0) 
            grades.push_back("B");
        else if(score >= 70.0) 
            grades.push_back("C");
        else if(score >= 60.0) 
            grades.push_back("D");
        else 
            grades.push_back("E");
    }
    
    return grades;
}

int main() {
    std::vector<int> scores = {90, 80};
    assert(issame(numerical_letter_grade(scores), {"A", "B"}));
    return 0;
}