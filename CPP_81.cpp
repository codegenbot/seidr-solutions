#include <vector>
#include <string>

bool issame(float a, float b) {
    if ((a - b >= -0.0001f && a - b <= 0.0001f) || (b - a >= -0.0001f && b - a <= 0.0001f))
        return true;
    else
        return false;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float g : grades) {
        std::string letter;
        if (g > 4.0f) g = 4.0f; // cap at 4.0
        if (g >= 3.7f) { letter = "A"; g -= 3.7f; }
        else if (g >= 3.3f) { letter = "A-"; g -= 3.3f; }
        else if (g >= 3.0f) { letter = "B+"; g -= 3.0f; }
        else if (g >= 2.7f) { letter = "B"; g -= 2.7f; }
        else if (g >= 2.3f) { letter = "B-"; g -= 2.3f; }
        else if (g >= 2.0f) { letter = "C+"; g -= 2.0f; }
        else if (g >= 1.7f) { letter = "C"; g -= 1.7f; }
        else if (g >= 1.3f) { letter = "C-"; g -= 1.3f; }
        else if (g >= 1.0f) { letter = "D+"; g -= 1.0f; }
        else if (g >= 0.7f) { letter = "D"; g -= 0.7f; }
        else letter = "F";
        if (!issame(g, 0.0f)) letter += "+";
        letter_grades.push_back(letter);
    }
    return letter_grades;
}