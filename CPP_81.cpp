#include <vector>
#include <string>

bool issame(float a, float b) {
    if (a - b > 0.0001 || b - a > 0.0001)
        return false;
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float g : grades) {
        std::string letter;
        if (g > 4.0) g = 4.0; // cap at 4.0
        if (g >= 3.7) {letter = "A"; g -= 3.7;}
        else if (g >= 3.3) {letter = "A-"; g -= 3.3;}
        else if (g >= 3.0) {letter = "B+"; g -= 3.0;}
        else if (g >= 2.7) {letter = "B"; g -= 2.7;}
        else if (g >= 2.3) {letter = "B-"; g -= 2.3;}
        else if (g >= 2.0) {letter = "C+"; g -= 2.0;}
        else if (g >= 1.7) {letter = "C"; g -= 1.7;}
        else if (g >= 1.3) {letter = "C-"; g -= 1.3;}
        else if (g >= 1.0) {letter = "D+"; g -= 1.0;}
        else if (g >= 0.7) {letter = "D"; g -= 0.7;}
        else letter = "E";
        if (!issame(g, 0.0)) letter += "+";
        letter_grades.push_back(letter);
    }
    return letter_grades;
}