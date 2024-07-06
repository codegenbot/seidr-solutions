#include <iostream>
#include <vector>
#include <string>

double toLetterGrade(double score) {
    if(score >= 90) {
        return 4.0;
    } else if(score >= 80) {
        return 3.7;
    } else if(score >= 70) {
        return 3.3;
    } else if(score >= 60) {
        return 3.0;
    } else {
        return 0.0;
    }
}

std::vector<std::string> numerical_letter_grade(std::vector<double> scores) {
    std::vector<std::string> result;
    for(double score : scores) {
        double letterGrade = toLetterGrade(score);
        if(letterGrade < 2.0) {
            result.push_back("F");
        } else if(letterGrade < 3.0) {
            result.push_back("D-");
        } else if(letterGrade < 3.3) {
            result.push_back("D+");
        } else if(letterGrade < 3.7) {
            result.push_back("C-");
        } else if(letterGrade < 4.0) {
            result.push_back("C+");
        } else {
            result.push_back("A");
        }
    }
    return result;
}

int main() {
    std::vector<int> scores = {0, 70};
    std::vector<std::string> grades = {"E", "D-" };
    assert(issame(numerical_letter_grade({0.0}), {"F" }));
    assert(issame(numerical_letter_grade({69.9}), {"F" }));
    assert(issame(numerical_letter_grade({70}), {"D-" }));
    return 0;
}