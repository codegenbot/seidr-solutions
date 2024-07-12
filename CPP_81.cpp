#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<float> grades){
    std::vector<std::string> result;
    for(float g : grades) {
        std::string letterGrade;
        if(g >= 4.0) {
            letterGrade = "A+";
        } else if(g > 3.7) {
            letterGrade = "A";
        } else if(g > 3.3) {
            letterGrade = "A-";
        } else if(g > 3.0) {
            letterGrade = "B+";
        } else if(g > 2.7) {
            letterGrade = "B";
        } else if(g > 2.3) {
            letterGrade = "B-";
        } else if(g > 2.0) {
            letterGrade = "C+";
        } else if(g > 1.7) {
            letterGrade = "C";
        } else if(g > 1.3) {
            letterGrade = "C-";
        } else if(g > 1.0) {
            letterGrade = "D+";
        } else if(g > 0.7) {
            letterGrade = "D";
        } else if(g > 0.0) {
            letterGrade = "D-";
        } else {
            letterGrade = "E";
        }
        result.push_back(letterGrade);
    }
    return result;
}