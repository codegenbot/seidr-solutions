```cpp
#include <iostream>
#include <vector>
#include <string>

int numerical_letter_grade(int score) {
    if(score >= 90) return 4;
    else if(score >= 80) return 3;
    else if(score >= 70) return 2;
    else if(score >= 60) return 1;
    else return 0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> scores = {90, 70};
    std::vector<std::string> grades;
    for(int score : scores) {
        grades.push_back(std::to_string(numerical_letter_grade(score)));
    }
    assert(issame(numerical_letter_grade(scores), grades));
    return 0;
}