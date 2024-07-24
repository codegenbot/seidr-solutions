#include <vector>
#include <string>

bool issame(float a, float b) {
    if (abs(a - b) < 0.0001)
        return true;
    else
        return false;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float g : grades) {
        if (g > 4.0) g = 4.0; // cap at 4.0
        std::string letter;
        if (g >= 3.7) { letter = "A"; }
        else if (issame(g, 3.7)) { letter = "B+"; }
        else if (g >= 3.3) { letter = "A-"; }
        else if (issame(g, 3.3)) { letter = "B"; }
        else if (g >= 3.0) { letter = "B-"; }
        else if (issame(g, 3.0)) { letter = "C+"; }
        else if (g >= 2.7) { letter = "C"; }
        else if (issame(g, 2.7)) { letter = "D+"; }
        else if (g >= 2.3) { letter = "D"; }
        else if (issame(g, 2.3)) { letter = "F"; }
        else if (g >= 2.0) letter = "D-";
        else if (issame(g, 2.0)) letter = "F";
        else letter = "F";

        if (g > 0.0) letter += "+";
        letter_grades.push_back(letter);
    }
    return letter_grades;
}